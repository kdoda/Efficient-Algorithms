/*Given two sorted lists, L1 and L2, write a procedure to compute L1 U L2 using only
the basic list operations.*/
#include <iostream>
#include <list>
using namespace std;

template<class var>
void bashkim(list<var> &l,list<var> &p,list<var> &bashko)
{
    typename list<var>::iterator pIt=p.begin();
    typename list<var>::iterator lIt=l.begin();

   // bashko.back kur nk ka el ka vl zero

    while(true)
    {
        if(pIt==p.end())
        {
            while(lIt!=l.end())
            {
                if(bashko.back()!=*lIt )
                    bashko.push_back(*lIt);
                ++lIt;
            }
        break;
        }
        else if(lIt==l.end())
        {
            while(pIt!=p.end())
            {
                if(bashko.back()!=*pIt )
                    bashko.push_back(*pIt);
                ++pIt;
            }
        break;
        }

        if(*pIt==*lIt)
        {
            if(bashko.back()!=*pIt)
            bashko.push_back(*pIt);
            ++pIt;
            ++lIt;
        }
        else if( *pIt>*lIt )
        {
            if(bashko.back()!=*lIt ) //ktu kjo kujdes
            bashko.push_back(*lIt);
            ++lIt;
        }
        else
        {
            if(bashko.back()!=*lIt )
            bashko.push_back(*pIt);
            ++pIt;
        }
    }


}


int main ()
{
    list<int> mylist;
    mylist.push_back (1);
    mylist.push_back (1);
    mylist.push_back (1);
    mylist.push_back (1);
    mylist.push_back (1);
    mylist.push_back (2);
    mylist.push_back (300);
    mylist.push_back (300);
    mylist.push_back (300);
    mylist.push_back (300);
    mylist.push_back (300);
    mylist.push_back (300);

    list<int> p;
    p.push_back (3);
    p.push_back (4);
    p.push_back (5);


    list<int> perfundimtare;

    cout<<perfundimtare.back();
    bashkim(mylist,p,perfundimtare);

    list<int>::iterator it;

    for(it=perfundimtare.begin(); it!=perfundimtare.end(); ++it)
        cout<<*it<<"  ";

}
