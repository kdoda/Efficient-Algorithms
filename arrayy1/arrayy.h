#include <iostream>
#include <vector>


using namespace std;
template <class var>
int greaterThan(vector<var>&v,var k){

 int nr=0;

 for(int i=0;i<v.size();i++)
    if(v[i]>k)
    nr++;

    return nr;
}

template <class var>
bool member(vector<var>&v,var k){

 for(int i=0;i<v.size();i++)
    if(v[i]==k)
    return true;

 return false;

}
template <class var>
void rmv(vector<var>&v,var k){

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


template <class var>
void rvrs(vector<var>&v){


    for(int i=0;i<=v.size()/2;i++)
    {
        var a=v[i];
        v[i]=v[v.size()-i-1];
        v[v.size()-i-1]=a;
    }
}

template <class var>
int ordering(vector<var>&v){





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


//template <class var>

struct element{
int index; ///index
int el; ///elementi

};


struct element largest(vector<int>&v){

struct element x;

int max=v[0];
int index=0;


for(int i=0;i<v.size();i++)
    {
     if(v[i]>max)
        {
            max=v[i];
        index=i;
        }
}

x.el=max;
x.index=index;

 return x;

};









