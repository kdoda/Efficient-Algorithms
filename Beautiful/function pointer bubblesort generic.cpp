#include<iostream>
#include <vector>
#include<cstdlib> //permban rand
using namespace std;

int compareUp(int a,int b)
{
    if(a>b)
        return 1;
    else return -1;
}

void bubbleSort(vector<int> &v,int (*compare)(int,int)){

for(int i=0;i<v.size();i++)
    for(int j=0;j<v.size()-1;j++)
{
    if(compare(v[j],v[j+1])>0)
    {
        int temp=v[j];
        v[j]=v[j+1];
        v[j+1]=temp;
    }
}
}

int main(){

vector<int> a(10);

for(int i=0;i<a.size();i++)
    a[i]=(rand()%100)-50; //gjeneron nga -50 ne 49


cout<<"vektori i parenditur:\n";

for(int i=0;i<a.size();i++)
    cout<<a[i]<<"   ";

    bubbleSort(a,compareUp); //vetem emrin
cout<<endl<<"vektori i renditur\n";
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<"   ";

}
