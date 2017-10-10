#include <iostream>
#include <vector>
#include "arrayy.h"

int main(){

vector<int> v(5);

cout<<"jep el e vektorit";

for(int i=0;i<v.size();i++)
    cin>>v[i];

cout<<endl<<greaterThan(v,2);

struct element a;

a=largest(v);

cout<<endl<<a.el<<"   "<<a.index;


}
