#include <TTreePlayer.h>
#include <TString.h>
#include <TObjArray.h>
#include <TDatime.h>
#include <TFile.h>
#include <TTree.h>
#include <TLeafObject.h>
#include <TChain.h>
#include <TChainElement.h>
#include <TBranch.h>
#include <TBranchObject.h>
#include <TBranchElement.h>
#include <TROOT.h>
#include <TVirtualStreamerInfo.h>
#include <TStreamerElement.h>


#include <iostream>
#include <fstream>


/*
void Error(const char *t,const  char *mes, const char *mm = 0)
{
   cout <<t<<" : "<<mes<< " "<<mm<<endl;
}*/

bool findInArray(vector<TString> &v,TString &t)
{
   for (int i=0;i<v.size();i++)
   {
      if (t==v[i]) return 1;
   }
   return 0;
}

static TString R__GetBranchPointerName(TLeaf *leaf)
{
   // Return the name of the branch pointer needed by MakeClass/MakeSelector

   TLeaf *leafcount = leaf->GetLeafCount();
   TBranch *branch = leaf->GetBranch();

   TString branchname( branch->GetName() );

   if ( branch->GetNleaves() <= 1 ) {
       if (branch->IsA() != TBranchObject::Class()) {
         if (!leafcount) {
            TBranch *mother = branch->GetMother();
            const char* ltitle = leaf->GetTitle();
            if (mother && mother!=branch) {
               branchname = mother->GetName();
               if (branchname[branchname.Length()-1]!='.') {
                  branchname += ".";
               }
               if (strncmp(branchname.Data(),ltitle,branchname.Length())==0) {
                  branchname = "";
               }
            } else {
               branchname = "";
            }
            branchname += ltitle;
         }
      }
   }
   char *bname = (char*)branchname.Data();
   char *twodim = (char*)strstr(bname,"[");
   if (twodim) *twodim = 0;
   while (*bname) {
      if (*bname == '.') *bname='_';
      if (*bname == ',') *bname='_';
      if (*bname == ':') *bname='_';
      if (*bname == '<') *bname='_';
      if (*bname == '>') *bname='_';
      bname++;
   }
   return branchname;
}


Int_t makeClass(TTree *fTree, const char *className, const char *option, double safety = 2)
{
   TString opt = option;
   vector<TString> dimArray;
   vector<Int_t> dimSize;
   opt.ToLower();
   // Connect output files
   if (!className) className = fTree->GetName();

   TString thead;
   thead.Form("Setup%sTree.h", className);
   char *classNameOld = Form("%s",className);
   className = Form("%ss",className);
   cout <<thead<<" created"<<endl;
   FILE *fp = fopen(thead, "w");
   if (!fp) {
      cout <<"MakeClass"<<"cannot open output file %s"<< thead.Data()<<endl;
      return 3;
   }

   TString treefile;
   if (fTree->GetDirectory() && fTree->GetDirectory()->GetFile()) {
      treefile = fTree->GetDirectory()->GetFile()->GetName();
   } else {
      treefile = "Memory Directory";
   }
   // In the case of a chain, the GetDirectory information usually does
   // pertain to the Chain itself but to the currently loaded tree.
   // So we can not rely on it.
   Bool_t ischain = fTree->InheritsFrom(TChain::Class());
   Bool_t isHbook = fTree->InheritsFrom("THbookTree");
   if (isHbook)
      treefile = fTree->GetTitle();

//======================Generate className.h=====================
   // Print header
   TObjArray *leaves = fTree->GetListOfLeaves();
   Int_t nleaves = leaves ? leaves->GetEntriesFast() : 0;
   TDatime td;
   fprintf(fp,"//////////////////////////////////////////////////////////\n");
   fprintf(fp,"// This class has been automatically generated on\n");
   fprintf(fp,"// %s by ROOT version %s\n",td.AsString(),gROOT->GetVersion());
   if (!ischain) {
      fprintf(fp,"// from TTree %s/%s\n",fTree->GetName(),fTree->GetTitle());
      fprintf(fp,"// found on file: %s\n",treefile.Data());
   } else {
      fprintf(fp,"// from TChain %s/%s\n",fTree->GetName(),fTree->GetTitle());
   }
   fprintf(fp,"//////////////////////////////////////////////////////////\n");
   fprintf(fp,"#include \"commonSetup.h\"\n");
   fprintf(fp,"#include <iostream>\n");
   fprintf(fp,"#include <TROOT.h>\n");
   fprintf(fp,"#include <TChain.h>\n");
   fprintf(fp,"#include <TFile.h>\n");
   fprintf(fp,"#include <TTree.h>\n");
   fprintf(fp,"#include <TBranch.h>\n");
   if (isHbook) fprintf(fp,"#include <THbookFile.h>\n");
   if (opt.Contains("selector")) fprintf(fp,"#include <TSelector.h>\n");

// First loop on all leaves to generate dimension declarations
   Int_t len, lenb,l;
   char blen[1024];
   char *bname;
   Int_t *leaflen = new Int_t[nleaves];
   TObjArray *leafs = new TObjArray(nleaves);
   for (l=0;l<nleaves;l++) {
      TLeaf *leaf = (TLeaf*)leaves->UncheckedAt(l);
      leafs->AddAt(new TObjString(leaf->GetName()),l);
      leaflen[l] = leaf->GetMaximum();
   }
   if (ischain) {
      // In case of a chain, one must find the maximum dimension of each leaf
      // One must be careful and not assume that all Trees in the chain
      // have the same leaves and in the same order!
      TChain *chain = (TChain*)fTree;
      Int_t ntrees = chain->GetNtrees();
      for (Int_t file=0;file<ntrees;file++) {
         Long64_t first = chain->GetTreeOffset()[file];
         chain->LoadTree(first);
         for (l=0;l<nleaves;l++) {
            TObjString *obj = (TObjString*)leafs->At(l);
            TLeaf *leaf = chain->GetLeaf(obj->GetName());
            if (leaf) {
               leaflen[l] = TMath::Max(leaflen[l],leaf->GetMaximum());
            }
         }
      }
      chain->LoadTree(0);
   }

   leaves = fTree->GetListOfLeaves();
   for (l=0;l<nleaves;l++) {
      TLeaf *leaf = (TLeaf*)leaves->UncheckedAt(l);
      strcpy(blen,leaf->GetName());
      bname = &blen[0];
      while (*bname) {
         if (*bname == '.') *bname='_';
         if (*bname == ',') *bname='_';
         if (*bname == ':') *bname='_';
         if (*bname == '<') *bname='_';
         if (*bname == '>') *bname='_';
         bname++;
      }
      lenb = strlen(blen);
      if (blen[lenb-1] == '_') {
         blen[lenb-1] = 0;
         len = leaflen[l];
         if (len <= 0) len = 1;
         fprintf(fp,"   const Int_t kMax%s = %d;\n",blen,len);
      }
   }
   delete [] leaflen;
   leafs->Delete();
   delete leafs;



// second loop on all leaves to generate type declarations
   fprintf(fp,"\n");
   fprintf(fp,"class %s {\n",className);
   fprintf(fp,"public :\n");
   fprintf(fp,"   %s(){};\n",className);
   fprintf(fp,"   ~%s(){};\n",className);
   fprintf(fp,"\n   // Declaration of leaf types\n");

   TLeaf *leafcount;
   TLeafObject *leafobj;
   TBranchElement *bre=0;
   const char *headOK  = "   ";
   const char *headcom = " //";
   const char *head;
   char branchname[1024];
   char aprefix[1024];
   TObjArray branches(100);
   TObjArray mustInit(100);
   TObjArray mustInitArr(100);
   mustInitArr.SetOwner(kFALSE);
   Int_t *leafStatus = new Int_t[nleaves];
   for (l=0;l<nleaves;l++) {
      Int_t kmax = 0;
      head = headOK;
      leafStatus[l] = 0;
      TLeaf *leaf = (TLeaf*)leaves->UncheckedAt(l);
      len = leaf->GetLen(); if (len<=0) len = 1;
      leafcount =leaf->GetLeafCount();
      TBranch *branch = leaf->GetBranch();
      branchname[0] = 0;
      strcpy(branchname,branch->GetName());
      strcpy(aprefix,branch->GetName());
      if (!branches.FindObject(branch)) branches.Add(branch);
      else leafStatus[l] = 1;
      if ( branch->GetNleaves() > 1) {
         // More than one leaf for the branch we need to distinguish them
         strcat(branchname,".");
         strcat(branchname,leaf->GetTitle());
         if (leafcount) {
            // remove any dimension in title
            char *dim =  (char*)strstr(branchname,"["); if (dim) dim[0] = 0;
         }
      } else {
         strcpy(branchname,branch->GetName());
      }
      char *twodim = (char*)strstr(leaf->GetTitle(),"][");
      bname = branchname;
      while (*bname) {
         if (*bname == '.') *bname='_';
         if (*bname == ',') *bname='_';
         if (*bname == ':') *bname='_';
         if (*bname == '<') *bname='_';
         if (*bname == '>') *bname='_';
         bname++;
      }
      if (branch->IsA() == TBranchObject::Class()) {
         if (branch->GetListOfBranches()->GetEntriesFast()) {leafStatus[l] = 1; continue;}
         leafobj = (TLeafObject*)leaf;
         if (!leafobj->GetClass()) {leafStatus[l] = 1; head = headcom;}
         fprintf(fp,"%s%-15s *%s;\n",head,leafobj->GetTypeName(), leafobj->GetName());
         if (leafStatus[l] == 0) mustInit.Add(leafobj);
         continue;
      }
      if (leafcount) {
         len = leafcount->GetMaximum();
         if (len<=0) len = 1;
         strcpy(blen,leafcount->GetName());
         bname = &blen[0];
         while (*bname) {
            if (*bname == '.') *bname='_';
            if (*bname == ',') *bname='_';
            if (*bname == ':') *bname='_';
            if (*bname == '<') *bname='_';
            if (*bname == '>') *bname='_';
            bname++;
         }
         lenb = strlen(blen);
         if (blen[lenb-1] == '_') {blen[lenb-1] = 0; kmax = 1;}
         else                     sprintf(blen,"%d",len);
      }
      if (branch->IsA() == TBranchElement::Class()) {
         bre = (TBranchElement*)branch;
         if (bre->GetType() != 3 && bre->GetType() != 4
             && bre->GetStreamerType() <= 0 && bre->GetListOfBranches()->GetEntriesFast()) {
            leafStatus[l] = 0;
         }
         if (bre->GetType() == 3 || bre->GetType() == 4) {
            fprintf(fp,"   %-15s %s_;\n","Int_t", branchname);
            continue;
         }
         if (bre->IsBranchFolder()) {
            fprintf(fp,"   %-15s *%s;\n",bre->GetClassName(), branchname);
            mustInit.Add(bre);
            continue;
         } else {
            if (branch->GetListOfBranches()->GetEntriesFast()) {leafStatus[l] = 1;}
         }
         if (bre->GetStreamerType() < 0) {
            if (branch->GetListOfBranches()->GetEntriesFast()) {
               fprintf(fp,"%s%-15s *%s;\n",headcom,bre->GetClassName(), bre->GetName());
            } else {
               fprintf(fp,"%s%-15s *%s;\n",head,bre->GetClassName(), bre->GetName());
               mustInit.Add(bre);
            }
            continue;
         }
         if (bre->GetStreamerType() == 0) {
            if (!TClass::GetClass(bre->GetClassName())->GetClassInfo()) {leafStatus[l] = 1; head = headcom;}
            fprintf(fp,"%s%-15s *%s;\n",head,bre->GetClassName(), bre->GetName());
            if (leafStatus[l] == 0) mustInit.Add(bre);
            continue;
         }
         if (bre->GetStreamerType() > 60) {
            TClass *cle = TClass::GetClass(bre->GetClassName());
            if (!cle) {leafStatus[l] = 1; continue;}
            if (bre->GetStreamerType() == 66) leafStatus[l] = 0;
            char brename[256];
            strcpy(brename,bre->GetName());
            char *bren = brename;
            char *adot = strrchr(bren,'.');
            if (adot) bren = adot+1;
            char *brack = strchr(bren,'[');
            if (brack) *brack = 0;
            TStreamerElement *elem = (TStreamerElement*)cle->GetStreamerInfo()->GetElements()->FindObject(bren);
            if (elem) {
               if (elem->IsA() == TStreamerBase::Class()) {leafStatus[l] = 1; continue;}
               if (!TClass::GetClass(elem->GetTypeName())) {leafStatus[l] = 1; continue;}
               if (!TClass::GetClass(elem->GetTypeName())->GetClassInfo()) {leafStatus[l] = 1; head = headcom;}
               if (leafcount) fprintf(fp,"%s%-15s %s[kMax%s];\n",head,elem->GetTypeName(), branchname,blen);
               else           fprintf(fp,"%s%-15s %s;\n",head,elem->GetTypeName(), branchname);
            } else {
               if (!TClass::GetClass(bre->GetClassName())->GetClassInfo()) {leafStatus[l] = 1; head = headcom;}
               fprintf(fp,"%s%-15s %s;\n",head,bre->GetClassName(), branchname);
            }
            continue;
         }
      }
      if (strlen(leaf->GetTypeName()) == 0) {leafStatus[l] = 1; continue;}
      if (leafcount) {
         //len = leafcount->GetMaximum();
         //strcpy(blen,leafcount->GetName());
         //bname = &blen[0];
         //while (*bname) {if (*bname == '.') *bname='_'; bname++;}
         //lenb = strlen(blen);
         //Int_t kmax = 0;
         //if (blen[lenb-1] == '_') {blen[lenb-1] = 0; kmax = 1;}
         //else                     sprintf(blen,"%d",len);

         const char *stars = " ";
         if (bre && bre->GetBranchCount2()) {
            stars = "*";
         }
         // Dimensions can be in the branchname for a split Object with a fix length C array.
         // Theses dimensions HAVE TO be placed after the dimension explicited by leafcount
         char *dimensions = 0;
         char *dimInName = (char*) strstr(branchname,"[");
         if ( twodim || dimInName ) {
            int dimlen = 0;
            if (dimInName) dimlen += strlen(dimInName) + 1;
            if (twodim)    dimlen += strlen(twodim) + 1;
            dimensions = new char[dimlen];
            if (dimInName) {
               strcpy(dimensions,dimInName);
               dimInName[0] = 0; // terminate branchname before the array dimensions.
            } else dimensions[0] = 0;
            if (twodim) strcat(dimensions,(char*)(twodim+1));
         }
         const char* leafcountName = leafcount->GetName();
         char b2len[1024];
         if (bre && bre->GetBranchCount2()) {
            TLeaf * l2 = (TLeaf*)bre->GetBranchCount2()->GetListOfLeaves()->At(0);
            strcpy(b2len,l2->GetName());
            bname = &b2len[0];
            while (*bname) {
               if (*bname == '.') *bname='_';
               if (*bname == ',') *bname='_';
               if (*bname == ':') *bname='_';
               if (*bname == '<') *bname='_';
               if (*bname == '>') *bname='_';
               bname++;
            }
            leafcountName = b2len;
         }
         if (dimensions) {
	    TString h(leafcountName);
	    if (!findInArray(dimArray,h)) {
	       dimArray.push_back(h);
	       dimSize.push_back(len*safety);
	    }
	    if (kmax) fprintf(fp,"   %-14s %s%s[kMax%s]%s;   //[%s]\n",leaf->GetTypeName(), stars,
                              branchname,blen,dimensions,leafcountName);
            else      fprintf(fp,"   %-14s %s%s[%d]%s;   //[%s]\n",leaf->GetTypeName(), stars,
                              branchname,len*2,dimensions,leafcountName);
            delete [] dimensions;
         } else {
	    TString h(leafcountName);
	    if (!findInArray(dimArray,h)) {
	       dimArray.push_back(h);
	       dimSize.push_back(len*safety);
	    }
            if (kmax) fprintf(fp,"   %-14s %s%s[kMax%s];   //[%s]\n",leaf->GetTypeName(), stars, branchname,blen,leafcountName);
            else      fprintf(fp,"   %-14s %s%s[%d];   //[%s]\n",leaf->GetTypeName(), stars, branchname,len*2,leafcountName);
         }
         if (stars[0]=='*') {
            TNamed *n;
            if (kmax) n = new TNamed(branchname, Form("kMax%s",blen));
            else n = new TNamed(branchname, Form("%d",len));
            mustInitArr.Add(n);
         }
      } else {
         if (strstr(branchname,"[")) len = 1;
         if (len < 2) fprintf(fp,"   %-15s %s;\n",leaf->GetTypeName(), branchname);
         else {
            if (twodim) fprintf(fp,"   %-15s %s%s;\n",leaf->GetTypeName(), branchname,(char*)strstr(leaf->GetTitle(),"["));
            else        fprintf(fp,"   %-15s %s[%d];\n",leaf->GetTypeName(), branchname,len);
         }
      }
   }

// generate list of branches
   fprintf(fp,"\n");
   fprintf(fp,"   // List of branches\n");
   for (l=0;l<nleaves;l++) {
      if (leafStatus[l]) continue;
      TLeaf *leaf = (TLeaf*)leaves->UncheckedAt(l);
      fprintf(fp,"   TBranch        *b_%s;   //!\n",R__GetBranchPointerName(leaf).Data());
   }

   fprintf(fp,"\n");
   fprintf(fp,"};\n");
   fprintf(fp,"\n");
   fprintf(fp,"\n");

//======================================================================================================
// generate code for setup function, first pass = get branch pointer
//======================================================================================================
   fprintf(fp,"void setup%sTree(TTree *t,%s &t%s,bool doCheck = 1)\n",classNameOld,className,className);
   fprintf(fp,"{\n");
   if (mustInit.Last()) {
      TIter next(&mustInit);
      TObject *obj;
      fprintf(fp,"   // Set object pointer\n");
      while( (obj = next()) ) {
         if (obj->InheritsFrom(TBranch::Class())) {
            strcpy(branchname,((TBranch*)obj)->GetName() );
         } else if (obj->InheritsFrom(TLeaf::Class())) {
            strcpy(branchname,((TLeaf*)obj)->GetName() );
         }
         bname = branchname;
         while (*bname) {
            if (*bname == '.') *bname='_';
            if (*bname == ',') *bname='_';
            if (*bname == ':') *bname='_';
            if (*bname == '<') *bname='_';
            if (*bname == '>') *bname='_';
            bname++;
         }
         fprintf(fp,"   %s = 0;\n",branchname );
      }
   }
   if (mustInitArr.Last()) {
      TIter next(&mustInitArr);
      TNamed *info;
      fprintf(fp,"   // Set array pointer\n");
      while( (info = (TNamed*)next()) ) {
         fprintf(fp,"   for(int i=0; i<%s; ++i) %s[i] = 0;\n",info->GetTitle(),info->GetName());
      }
      fprintf(fp,"\n");
   }
   fprintf(fp,"   // Set branch addresses and branch pointers\n");
   for (l=0;l<nleaves;l++) {
      if (leafStatus[l]) continue;
      TLeaf *leaf = (TLeaf*)leaves->UncheckedAt(l);
      len = leaf->GetLen();
      leafcount =leaf->GetLeafCount();
      TBranch *branch = leaf->GetBranch();
      strcpy(aprefix,branch->GetName());

      if ( branch->GetNleaves() > 1) {
         // More than one leaf for the branch we need to distinguish them
         strcpy(branchname,branch->GetName());
         strcat(branchname,".");
         strcat(branchname,leaf->GetTitle());
         if (leafcount) {
            // remove any dimension in title
            char *dim =  (char*)strstr(branchname,"["); if (dim) dim[0] = 0;
         }
      } else {
         strcpy(branchname,branch->GetName());
         if (branch->IsA() == TBranchElement::Class()) {
            bre = (TBranchElement*)branch;
            if (bre->GetType() == 3 || bre->GetType()==4) strcat(branchname,"_");
         }
      }
      bname = branchname;
      char *brak = strstr(branchname,"[");     if (brak) *brak = 0;
      char *twodim = (char*)strstr(bname,"["); if (twodim) *twodim = 0;
      while (*bname) {
         if (*bname == '.') *bname='_';
         if (*bname == ',') *bname='_';
         if (*bname == ':') *bname='_';
         if (*bname == '<') *bname='_';
         if (*bname == '>') *bname='_';
         bname++;
      }
      if (branch->IsA() == TBranchObject::Class()) {
         if (branch->GetListOfBranches()->GetEntriesFast()) {
            fprintf(fp,"   fChain->SetBranchAddress(\"%s\",(void*)-1,&b_%s);\n",branch->GetName(),R__GetBranchPointerName(leaf).Data());
            continue;
         }
         strcpy(branchname,branch->GetName());
      }
      if (branch->IsA() == TBranchElement::Class()) {
         if (((TBranchElement*)branch)->GetType() == 3) len =1;
         if (((TBranchElement*)branch)->GetType() == 4) len =1;
      }
      if (leafcount) len = leafcount->GetMaximum()+1;
      if (len > 1) fprintf(fp,"   t->SetBranchAddress(\"%s\", t%s.%s, &t%s.b_%s);\n",
                           branch->GetName(), className, branchname, className, R__GetBranchPointerName(leaf).Data());
      else         fprintf(fp,"   t->SetBranchAddress(\"%s\", &t%s.%s, &t%s.b_%s);\n",
                           branch->GetName(), className, branchname, className, R__GetBranchPointerName(leaf).Data());
   }

   fprintf(fp,"   if (doCheck) {\n");
   for (int i=0;i<dimArray.size();i++)
   {
       fprintf(fp,"      if (t->GetMaximum(\"%s\")>%d) cout <<\"FATAL ERROR: Arrary size of %s too small!!!  \"<<t->GetMaximum(\"%s\")<<endl;\n",dimArray[i].Data(),dimSize[i],dimArray[i].Data(),dimArray[i].Data());
   }
   fprintf(fp,"   }\n");
  
   fprintf(fp,"}\n");
   fprintf(fp,"\n");


   delete [] leafStatus;
   fclose(fp);

   return 0;
}


