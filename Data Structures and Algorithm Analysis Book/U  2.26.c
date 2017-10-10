#include <iostream>
#include <vector>

using namespace std;

int candidate(vector<int> & vec){

   int candidat=vec[0];
   int nr=1;

   for(int i=0;i<vec.size();i++){
        if(vec[i]==candidat)
           nr++;
        else
            nr--;
        if(nr==0){
            candidat=vec[i];
            nr=1;
        }
   }

   if(nr<=1){
    cout<<"Nuk ka kandidat";
    exit(1);
   }
   else
    return candidat;
}

int isMajor(vector<int> & vec){

   int coun=0;
   int cand=candidate(vec);
   for(int i=0;i<vec.size();i++){
        if(vec[i]==cand)
            coun++;
        if(coun>vec.size()/2)
            return cand;
   }
   exit(1);
}

int main(){

   vector<int> vec(10);
   for(int i=0;i<10;i++)
    cin>>vec[i];

   cout<<isMajor(vec);
   return 0;
}
