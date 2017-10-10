
#include <iostream>
#include <string>

using namespace std;

class Count{

public:

    void setValue(int value){
    x=value;
    }

   void printValue(){
   cout<<"value is:"<<x<<endl;
   }
private:
    int x;

};

int main(){

   Count cunt;
   Count *cuntPtr=&cunt;
   Count &cuntRef=cunt;


   cunt.setValue(1);
   cunt.printValue();

   cuntRef.setValue(2);
   cuntRef.printValue();

   cuntPtr->setValue(3);
   cuntPtr->printValue();








}
