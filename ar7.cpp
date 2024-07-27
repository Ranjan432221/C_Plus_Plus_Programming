#include<iostream>
using namespace std;
int main()
{
    int n,a[50];
    cout<<"enter how much element print in array";
    cin>>n;
    cout<<"enter the"<<" "<<n<<" "<<"no of element in array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int min = a[0];
    for(int i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min = a[i];
        }
    }
     cout<<"the minimum valu in array is="<<min;
     return 0;
}