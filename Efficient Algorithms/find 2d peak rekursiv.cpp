// find a peak ,definiton of peak a[i-1]<= a[i]>= a[i+1]
//MIT lecture 1
#include <iostream>
#include <vector>


using namespace std;

int findThatPeak(vector<int> &,int,int ,int);
int findPeak(vector<int> &);


int main(){
    vector<int> v;

    cout<<"Jepni el e vektori,jepni -0 per te ndaluar:"<<endl;

    while(true){
        int temp;
        cin>>temp;
        if(temp==-0)
            break;
        v.push_back(temp);
    }

    cout<<endl<<"Ju dhate vektorin:\n";
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<"  ";

    cout<<endl<<"Peak eshte vlera: "<<findPeak(v);



}

int findPeak(vector<int> &a)
{
    return findThatPeak(a,0,a.size()-1,a.size());
}

int findThatPeak(vector<int> &a,int fillim,int fund,int n)  // n eshte nr i el te vektorit sepse duhet te rri konstant ,sepse fund ndryshon
{
    int mesi=(fillim+fund)/2;

    if((mesi==0 && a[mesi]>=a[mesi+1])|| (mesi==n-1 && a[mesi]>=a[mesi-1]) || (a[mesi]>=a[mesi+1] && a[mesi]>=a[mesi-1])) //mund te thjeshtohet nga algjebra bulit ne
        return a[mesi];     //(mesi==0 || a[mesi]>=a[mesi+1]) &&  (mesi==n-1 || a[mesi]>=a[mesi-1])  , i bejm kto per rastet naesore

     else if (a[mesi+1]>a[mesi])
       return findThatPeak(a,mesi+1,fund,n);

    else if(a[mesi-1]>a[mesi])
      return  findThatPeak(a,fillim,mesi-1,n);

}





