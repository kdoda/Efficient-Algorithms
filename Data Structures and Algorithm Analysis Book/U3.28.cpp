/* A deque is a data structure consisting of a list of items on which the following
operations are possible:
push(x): Insert item x on the front end of the deque.
pop(): Remove the front item from the deque and return it.
inject(x): Insert item x on the rear end of the deque.
eject(): Remove the rear item from the deque and return it.
Write routines to support the deque that take O(1) time per operation.*/

#include <iostream>
#include <stack>
#include <list>
using namespace std;

template<class var>

class  Deque
{
public:
    Deque(int siz)
    {
        l.assign(siz,0);
    }
    void push(var x)
    {
        l.push_front(x);
    }
    var pop()
    {
        var temp=l.front();
        l.pop_front();
        return temp;
    }
    void inject(var x)
    {
        l.push_back(x);
    }
    var eject()
    {
        var temp=l.back();
        l.pop_back();
        return temp;
    }
    bool empty()
    {
        return l.empty();
    }
private:
    list<var> l;
};


int main()
{
    Deque<int> d(10);

    d.push(3);
    d.push(43);
    d.inject(35);
    d.inject(79);


    cout<<d.pop();
    cout<<endl<<d.pop();
    cout<<endl<<d.eject();
    cout<<endl<<d.eject();
}














