/*You are given a list, L, and another list, P, containing integers sorted in ascending
order. The operation printLots(L,P) will print the elements in L that are in positions
specified by P. For instance, if P = 1, 3, 4, 6, the elements in positions 1, 3, 4, and 6
in L are printed. Write the procedure printLots(L,P). You may use only the public
STL container operations. What is the running time of your procedure?*/

#include <iostream>
#include <list>
using namespace std;

template<class var>
void printo(list<var> &l,list<int> &p)
{
    typename list<int>::iterator pIt;
    typename list<var>::iterator lIt=l.begin();
    int start=1;
    for(pIt=p.begin();pIt!=p.end() && lIt!=l.end();++pIt)
    {
        while(start<*pIt && lIt!=l.end())
        {
            start++;
            ++lIt;
        }
    if(lIt!=l.end())
            cout<<*lIt<<endl;
    }

}


int main ()
{
  list<int> mylist;
  mylist.push_back (100);
  mylist.push_back (200);
  mylist.push_back (300);
  list<int> p;
  p.push_back (1);
  p.push_back (2);
  p.push_back (3);


printo(mylist,p);

}

