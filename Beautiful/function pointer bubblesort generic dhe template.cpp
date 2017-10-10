#include<iostream>
#include <vector>
#include<cstdlib> //permban rand
#include <math.h>
using namespace std;
template <class var>
int compareUp(var a,var b)
{
    if(a>b)
        return 1;
    else return -1;
}

template <class var>
int absoluteCompareUp(var a,var b)
{
    if(abs(a)>abs(b))
        return 1;
    else return -1;
}


template <class var>
void bubbleSort(vector<var> &v,int (*compare)(var,var)){

for(int i=0;i<v.size();i++)
    for(int j=0;j<v.size()-1;j++)
{
    if(compare(v[j],v[j+1])>0)
    {
        var temp=v[j];
        v[j]=v[j+1];
        v[j+1]=temp;
    }
}
}

int main(){

vector<int> a(10);

for(int i=0;i<a.size();i++)
    a[i]=(rand()%100)-50; //gjeneron nga -50 ne 49


cout<<"vektori i parenditur integer:\n";

for(int i=0;i<a.size();i++)
    cout<<a[i]<<"   ";

    bubbleSort(a,compareUp); //vetem emrin
cout<<endl<<"vektori i renditur rrites integer:\n";
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<"   ";

    bubbleSort(a,absoluteCompareUp); //vetem emrin
cout<<endl<<"vektori i renditur ne vler absolute rrites integer:\n";
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<"   ";




vector<float> b(10);
for(int i=0;i<b.size();i++)
    b[i]=(rand()%100)-50.46;

cout<<endl<<"vektori i parenditur float eshte:\n";

for(int i=0;i<b.size();i++)
    cout<<b[i]<<"   ";

      bubbleSort(b,compareUp); //vetem emrin

cout<<endl<<"vektori i renditur\n";
    for(int i=0;i<b.size();i++)
        cout<<b[i]<<"   ";




}
