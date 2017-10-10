#include <iostream>
#include <vector>
#include "array.h"


using namespace std;

int Array::greaterThan(vector<int>&v,int k){

 int nr=0;

 for(int i=0;i<v.size();i++)
    if(v[i]>k)
    nr++;

    return nr;
}

bool Array::member(vector<int>&v,int k){

 for(int i=0;i<v.size();i++)
    if(v[i]==k)
    return true;

 return false;

}

void Array::rmv(vector<int>&v,int k){

 for(int i=0;i<v.size();i++)
 {
     if(v[i]==k)
     {
         for(int j=i+1;j<v.size();j++)
                v[j-1]=v[j];

        v[v.size()-1]=0;

        break;
     }
 }
}



void Array::rvrs(vector<int>&v){


    for(int i=0;i<=v.size()/2;i++)
    {
        int a=v[i];
        v[i]=v[v.size()-i-1];
        v[v.size()-i-1]=a;
    }
}

int Array::ordering(vector<int>&v){

    int x=1;
    for(int i=0;i<v.size()-1;i++)
        if(v[i+1]<=v[i])
         {
             x=0;
             break;
         }

        if(x==1)
       return 1;
     // rend rrites
    //x do ket vl 0 ne kete pike

    for(int i=0;i<v.size()-1;i++)
        if(v[i+1]>=v[i])
         {
             x=1;
             break;
         }

        if(x==0)
       return -1; //rend zbrites
    // x do ket vl 1 ne kte pik

     for(int i=0;i<v.size()-1;i++)
        if(v[i+1]!=v[i])
         {
             x=0;
             break;
         }

        if(x==1)
       return 0; //konstant

       return 2; //rend cfaredo


}
