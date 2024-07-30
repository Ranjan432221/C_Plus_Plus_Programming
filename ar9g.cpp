#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter array size";
    cin>>n;
    int a[n];
    cout<<"enter the "<<n<<"no of elemenet in array"<<endl;
     for(int i=0;i<n;i++)
     {
        cin>>a[i];
     }
     cout<<"enter the 2nd array element"<<endl;
     int b[n];
     for(int i=0;i<n;i++)
     {
        cin>>b[i];
     }
     cout<<"the merge element of anarray are are given below"<<endl;
     int c[n];
     for(int i=0;i<n*2;i++)
    {
        if(i<n)
        {
            c[i] = a[i];
        }
        else
        {
            c[i] = b[i-n];
        }
         cout<<" "<<c[i];
    }
    return 0;
}