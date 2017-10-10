/*Given two sorted lists, L1 and L2, write a procedure to compute L1 ∩ L2 using only
the basic list operations.*/
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

