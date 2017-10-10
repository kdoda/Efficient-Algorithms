/* Propose a data structure that supports the stack push and pop operations and a
third operation findMin, which returns the smallest element in the data structure,
all in O(1) worst-case time.*/
#include <iostream>
#include <stack>

using namespace std;


template<class var>
class Stack{

private:
    stack<var> s;    /// stacku qe mban te gjitha vlerat
    stack<var> temp; ///stackuu ndihmues per te mbajtur min

public:
   void push(var);
   void pop();
   var top();
   bool empty();
   var findMin();

};

template<class var>
void Stack<var>::push(var x)
{
    s.push(x);

    if(temp.empty() || x<=temp.top()) ///nqs eshte bosh heren e pare e shtojme
        temp.push(x);
                      ///nqs eshte me e vogel shotjme te temp ,ne menyre qe te kemi min te pare ne temp gjithmone


}

template<class var>
void Stack<var>::pop()
{
  if(temp.top==s.top) ///nqs ka qene per te hequr min e heqim nga te dy stacket
    temp.pop();

    s.pop();  ///ktu do heqim sa here therritet
}

template<class var>
var Stack<var>::top()
{
  return  s.top();
}

template<class var>
bool Stack<var>::empty()
{
    return (s.empty());
}


template<class var>
var Stack<var>::findMin()
{
    return temp.top();
}


int main()
{
   Stack<int> s1;

   s1.push(10);
   s1.push(25);
   s1.push(2);
   s1.push(5);
   s1.push(325);

   cout<<s1.findMin();
}











