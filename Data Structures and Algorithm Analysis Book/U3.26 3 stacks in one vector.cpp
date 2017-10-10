#include <iostream>
#include <stack>
#include<cstdlib>
using namespace std;

template<class var>
class ThreeStack
{

public:
    ThreeStack(int =100); ///mer size e stack total
    ~ThreeStack();
    void pushA(var);
    void pushB(var);
    void pushC(var);
    void popA();
    void popB();
    void popC();
    var topSA();
    var topSB();
    var topSC();
    bool emptyA();
    bool emptyB();
    bool emptyC();
    bool full(); ///vektori qe mban variablat

private:
    int topA;      ///indexet ne vektor
    int topB;
    int topC;
    int sizeB;     /// na duhet kur te bejme zhvendosjen,kur a ose c duan te shtojne me shume por i jane ngjitur b
    int n;         ///madhesia e gjith stack(vector)
    var *vec;

    void move();  ///zhvendosim elementet b te mesi i hapsires ndermjet B dhe C(nqs do ikim djathtas) ,ose A dhe B(nqs do ikim majtas)

    bool fullA();
    bool fullC();
    int beginB(); ///kthe indexin e par te b ku ndodhet

};

template<class var>
ThreeStack<var>::ThreeStack(int siz)
{
    n=siz;
    topA=-1;
    topB=n/2 - 1; ///qe te shtojme heren e pare te n/2
    topC=n; ///indexi jasht
    sizeB=0; ///sepse ska velra ne fillim

    vec = new var[n]; ///alokojme memorie
}

template<class var>
ThreeStack<var>::~ThreeStack()
{
    delete [] vec; ///dealokojme memorien
}


template<class var>
int ThreeStack<var>::beginB()
{
    return (topB-sizeB+1);
}


template<class var>
bool ThreeStack<var>::fullC()
{
    return (topC-1==topB);
}


template<class var>
bool ThreeStack<var>::fullA()
{
    return (topA+1==beginB());
}

template<class var>
void ThreeStack<var>::move()
{


    if(fullA()) ///dmth ikim djathtas
    {
        int d=(topC-topB)/2; ///gjejme sa her do zhvendosemi

        for(int i=topB;i>=beginB();i--)
            vec[i+d]=vec[i]; ///el e i ja vejm d pozicione me lart

        topB=topB+d;
    }
    else if(fullC()) ///do ikim majtas
    {
        int d=(beginB()-topA)/2;

        for(int i=beginB();i<=topB;i++)
            vec[i-d]=vec[i]; ///el majtas i japim el ku jemi

       topB=topB-d;
    }
}

template<class var>
void ThreeStack<var>::pushA(var x)
{
    if(full())
    {
        cout<<"Ska me vend per te shtuar!!!";
        exit(1);
    }

    if(fullA())
       move();

     vec[++topA]=x;

}

template<class var>
void ThreeStack<var>::pushB(var x)
{
    if(full())
    {
        cout<<"Ska me vend per te shtuar!!!";
        exit(1);
    }

    if(fullC()) ///sepse b zgjate ne drejtim te c
        move();

     vec[++topB]=x;

     ++sizeB;

}

template<class var>
void ThreeStack<var>::pushC(var x)
{
    if(full())
    {
        cout<<"Ska me vend per te shtuar!!!";
        exit(1);
    }

    if(fullC()) ///sepse b zgjate ne drejtim te c
        move();

     vec[--topC]=x;
}

template<class var>
void ThreeStack<var>::popA()
{
    if(!emptyA())
        topA--;
}

template<class var>
void ThreeStack<var>::popB()
{
    if(!emptyB())
        {
            topB--;
            sizeB--;
        }
}

template<class var>
void ThreeStack<var>::popC()
{
    if(!emptyC())
        topC++;
}


template<class var>
var ThreeStack<var>::topSA()
{
  if(emptyA())
  {
      cout<<"Nuk ka el ne stackun A!!!";
      exit(1);
  }
  else return vec[topA];
}

template<class var>
var ThreeStack<var>::topSB()
{
  if(emptyB())
  {
      cout<<"Nuk ka el ne stackun B!!!";
      exit(1);
  }
  else return vec[topB];
}

template<class var>
var ThreeStack<var>::topSC()
{
  if(emptyC())
  {
      cout<<"Nuk ka el ne stackun C!!!";
      exit(1);
  }
  else return vec[topC];
}


template<class var>
bool ThreeStack<var>::emptyA()
{
    return (topA==-1);
}

template<class var>
bool ThreeStack<var>::emptyB()
{
    return (sizeB==0);
}

template<class var>
bool ThreeStack<var>::emptyC()
{
    return (topC==n);
}

template<class var>
bool ThreeStack<var>::full()
{
    ///ose return (n==(n-topC)+sizeB+topA+1);
     return(topA+1==beginB() && topB+1==topC);
}



int main()
{

   ThreeStack<int> s(30);

   s.pushA(9);
   s.pushA(3);
   s.pushA(93);
   s.pushA(53);

   s.pushB(34);
   s.pushB(342);
   s.pushB(684);
   s.pushB(78);

   s.pushC(426);
   s.pushC(65);
   s.pushC(85);
   s.pushC(754);

for(;;)
{
    if(s.full())
        break;

    s.pushA(1);

}
   while(!s.emptyA())
   {
       cout<<s.topSA()<<"  ";
       s.popA();
   }

   cout<<endl;
   while(!s.emptyB())
   {
       cout<<s.topSB()<<"  ";
       s.popB();
   }

   cout<<endl;
   while(!s.emptyC())
   {
       cout<<s.topSC()<<"  ";
       s.popC();
   }
}


