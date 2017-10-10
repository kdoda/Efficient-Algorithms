#include <iostream>
#include <iomanip>
// matric e trnaspozuar ndrysho rreshtat me shtyllat

using namespace std;
void inputMatric(int [][4],int );

int main(){

int v[3][4];
int v1[4][3];

cout<<"jep el e matrices(3X4)\n";
inputMatric(v,3);

for(int j=0;j<4;j++)
    for(int i=0;i<3;i++)
        v1[j][i]=v[i][j];

cout<<endl<<"Matrica e transpozuar (4x3)\n";

for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        cout<<setw(3)<<v1[i][j];

    cout<<endl;
    }
}

void inputMatric(int a[][4],int m){

for(int i=0;i<m;i++)
    for(int j=0;j<4;j++)
      cin>>a[i][j];
}



