#include <iostream>
#include <vector>
#include "array.h"
#include "array.cpp"
using namespace std;


int main()
{
    Array u;

    vector<int> a(5);


    cout<<"jep 5 el per vektorin:";
      for(int i=0;i<5;i++)
        cin>>a[i];

   cout<<u.greaterThan(a,3);
   cout<<endl<<u.member(a,1);

u.rvrs(a);
cout<<endl<<endl<<u.ordering(a)<<endl;


}
