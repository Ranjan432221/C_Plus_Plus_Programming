#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter thr sie of array";
    cin>>n;
    cout<<"enter the"<<n<<"no of array"<<endl;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"calculate the array "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<" "<<a[i]<<endl;
    }
    cout<<"the odd no of array is=";
    for(int i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            cout<<" "<<a[i]<<"\n"<<endl;
        }
    }
    return 0;
}