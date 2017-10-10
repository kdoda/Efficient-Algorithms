#include <iostream>
#include <vector>

using namespace std;
int ordering(vector<int>&);

int main(){

vector<int> a(5);
cout<<"Jep el e vektorit:   ";

for(int i=0;i<5;i++)
    cin>>a[i];

    cout<<endl<<ordering(a);
}


int ordering(vector<int>&v){
    int x=1;
    for(int i=0;i<v.size()-1;i++)
        if(v[i+1]<=v[i])
         {
             x=0;
             break;
         }

        if(x==1)
       return 1;

      // rend rrites
    //x do ket vl 0 ne kete pike

    for(int i=0;i<v.size()-1;i++)
        if(v[i+1]>=v[i])
         {
             x=1;
             break;
         }

        if(x==0)
       return -1; //rend zbrites
    // x do ket vl 1 ne kte pik

     for(int i=0;i<v.size()-1;i++)
        if(v[i+1]!=v[i])
         {
             x=0;
             break;
         }

        if(x==1)
       return 0; //konstant

       return 2; //rend cfaredo

}
