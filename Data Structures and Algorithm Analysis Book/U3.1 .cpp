/*You are given a list, L, and another list, P, containing integers sorted in ascending
order. The operation printLots(L,P) will print the elements in L that are in positions
specified by P. For instance, if P = 1, 3, 4, 6, the elements in positions 1, 3, 4, and 6
in L are printed. Write the procedure printLots(L,P). You may use only the public
STL container operations. What is the running time of your procedure?*/

#include <iostream>
#include <list>
using namespace std;

void printLots(list<int> &,int );
int main ()
{
  list<int> mylist;
  mylist.push_back (100);
  mylist.push_back (200);
  mylist.push_back (300);

for(int i=1;i<=3;i++)
  printLots(mylist,i);

  printLots(mylist,4);

}

void printLots(list<int> & l,int p)
{
    list<int>::iterator it;
    if(p<1 || p>l.size())
        {cout<<"dhate nje index te gabuar";
    return;}

int i=1;
    for(it=l.begin();it!=l.end() ;++it,++i)
    {
     if(i==p)
        cout<<*it<<"   ";
    }
}












