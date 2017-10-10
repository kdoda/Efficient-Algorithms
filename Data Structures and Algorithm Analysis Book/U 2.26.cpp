/*A majority element in an array, A, of sizeN is an element that appears more than N/2 times (thus, there is at most one). For example, the array
3,3,4,2,4,4,2,4,4
has a majority element (4), whereas the array
3,3,4,2,4,4,2,4
does not. If there is no majority element, your program should indicate this. Here is a sketch of an algorithm to solve the problem*/
#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int candidate(vector<int> & vec){

   int candidat=vec[0];
   int nr=1;

   for(int i=1;i<vec.size();i++){
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

   vector<int> vec(7);
   for(int i=0;i<7;i++)
    cin>>vec[i];

   cout<<isMajor(vec);
   return 0;
}
