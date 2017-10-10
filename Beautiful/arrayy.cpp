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





    int x=1,i;
    for(i=0;i<v.size()-1;i++)
        if(v[i+1]<=v[i])
         {
             x=0;
             break;
         }

        if(x==1)
       return 1;
     // rend rrites
    //x do ket vl 0 ne kete pike

  if(i==0){  // kontrollojme a eshte i =0 sepse nqs cikli me lart e ka len ne mes ska munci te jet as konstant as zbrites !!! vetem nqs e ka len direkt te el i pare ka mundsi
    for(i=0;i<v.size()-1;i++)
        if(v[i+1]>=v[i])
         {
             x=1;
             break;
         }

        if(x==0)
       return -1; //rend zbrites
    // x do ket vl 1 ne kte pik
   }

   if(i==0){
     for(i=0;i<v.size()-1;i++)
        if(v[i+1]!=v[i])
         {
             x=0;
             break;
         }

        if(x==1)
       return 0; //konstant
   }

       return 2; //rend cfaredo


}



    int main(){
vector<int> a(5);
vector<float>b(5);
//int c[5]={1,2,3,4,5};
int g=2;
cout<<"jepni vektorin me integer:  ";
for(int i=0;i<5;i++)
    cin>>a[i];
/*
cout<<endl<<greaterThan(a,g);


cout<<endl<<"jepni vektorin me float:  ";
for(int i=0;i<5;i++)
    cin>>b[i];
float k =2.9;
cout<<endl<<greaterThan(b,k);
*/

cout<<ordering(a);
}
