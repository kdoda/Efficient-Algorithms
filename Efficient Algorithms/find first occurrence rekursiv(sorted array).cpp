#include<iostream>
#include<vector>

using namespace std;

int binarySearch(vector<int> &v,int low,int high,int result,int x){

    if(low>high) //jo me e <= seps eduhet te kontrollojm dhe el e fundit
        return result;

    int mid=low +(high-low)/2; //sigurohesh sepse high +low mund te jet ineger shum i madh dhe e kalon kufirin

    if(v[mid]==x)
    return binarySearch(v,low,mid-1,mid,x);

    else if(x<v[mid])
    return binarySearch(v,low,mid-1,result,x);
    else
    return binarySearch(v,mid+1,high,result,x);

}

int firstOccurrence(vector<int> &v,int x){

return binarySearch(v,0,v.size()-1,-1,x);
}

int main(){

vector<int> v(7);

cout<<"Jepni 7 el e vektorit int:"<<endl;

for(int i=0;i<v.size();i++)
    cin>>v[i];
int g;
cout<<endl<<"Jep el qe doni te kerkoni:  ";
  cin>>g;

    cout<<endl<<firstOccurrence(v,g);

}

