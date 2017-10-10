#include <iostream>
#include <iomanip>
// shumzo dy matrica a(mxn)*b(nxk)=c(mxk)
//rreshti  shumzo shtyllat

using namespace std;


int main(){




int i,j,k,m,n,p;

cout<<"jep nr e rreshtave dhe shtyllave te matrices a:  ";
 cin>>m>>n;

cout<<"jep el e matrices a("<<m<<"x"<<n<<"):\n";
int a[m][n];
for( i=0;i<m;i++)
    for( j=0;j<n;j++)
      cin>>a[i][j];

cout<<"jep nr e  shtyllave te matrices b:  ";
 cin>>p;
 int b[n][p];
 int c[m][p];

cout<<"jep el e matrices b("<<n<<"x"<<p<<"):\n";
for( i=0;i<n;i++)
    for( j=0;j<p;j++)
      cin>>b[i][j];

int s=0;
for( i=0;i<m;i++)
    for( j=0;j<p;j++)
        {
            s=0;
            for( k=0;k<n;k++)
                s+=a[i][k]*b[k][j];
             c[i][j]=s;
        }

cout<<endl<<"Matrica e e shumezuar c("<<m<<"x"<<p<<"):\n";

for(int i=0;i<m;i++)
    {
        for(int j=0;j<p;j++)
        cout<<setw(3)<<c[i][j];

    cout<<endl;
    }

}
