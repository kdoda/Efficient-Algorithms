/*Implement the STL find routine that returns the iterator containing the first occur
rence of x in the range that begins at start and extends up to but not including end.
If x is not found, end is returned. This is a nonclass (global function) with signature
template <typename Iterator, typename Object>
iterator find( Iterator start, Iterator end, const Object & x )*/

#include <iostream>
#include <list>
using namespace std;

template <typename Iterator, typename Object>
iterator find( Iterator start, Iterator end, const Object & x )
{
    for()
}

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
