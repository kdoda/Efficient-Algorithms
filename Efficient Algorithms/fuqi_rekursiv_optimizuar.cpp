
#include<iostream>

using namespace std;

int fuqi(int base,int exp)
{
    if(exp==0)
     return 1;

     if(exp%2==0)
       return fuqi(base*base,exp/2);
       else return base*fuqi(base*base,exp/2);

}


int main(){

  cout<< fuqi(2,10);
}
