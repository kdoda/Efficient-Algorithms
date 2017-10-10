/*Given two sorted lists, L1 and L2, write a procedure to compute L1 ∩ L2 using only
the basic list operations.*/
#include <iostream>
#include <list>
using namespace std;

template<class var>
void prerja(list<var> &l,list<var> &p,list<var> &bashko)
{
    typename list<var>::iterator pIt=p.begin();
    typename list<var>::iterator lIt=l.begin();

    while(pIt!=p.end() && lIt!=l.end())
    {
        if(*pIt==*lIt && *pIt!=bashko.back())
        {
            bashko.push_back(*pIt);
            ++pIt;
            ++lIt;
        }
        else if(*pIt>*lIt)
            ++lIt;
        else
            ++pIt;
    }

}


int main ()
{
  list<int> mylist;
  mylist.push_back (100);
  mylist.push_back (100);
  mylist.push_back (100);
  mylist.push_back (100);
\
  list<int> p;
  p.push_back (100);
  p.push_back (100);
   p.push_back (100);
  p.push_back (100);
   p.push_back (100);
  p.push_back (100);


  list<int> perfundimtare;


prerja(mylist,p,perfundimtare);

list<int>::iterator it;

for(it=perfundimtare.begin();it!=perfundimtare.end();++it)
    cout<<*it<<"   ";

}

