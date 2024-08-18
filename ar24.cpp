#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of arrray"<<endl;
    cin>>n;
    cout<<"enter the"<<n<<"no of element in array"<<endl;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"the array in the sizely print"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}