//Design efﬁcient algorithms that take an array of positive numbers a, and determine:
//a. the maximum value of a[j]+a[i], with j≥i
#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;


int main()
{
    vector<int> v(7);
for(int i=0;i<7;i++)
    cin>>v[i];

    int max1,max2,min=v[0];

if(v[0]>v[1])
{
    max1=v[0];
    max2=v[1];
}
else{
     max1=v[1];
     max2=v[0];
}


for(int i=1;i<7;i++)
    {

        if(v[i]>max1)
            {
            max2=max1;
            max1=v[i];

            }
       else if(v[i]>max2)
            max2=v[i];


    }

cout<<endl<<max1+max2;
cout<<endl<<max1*max2;

}

