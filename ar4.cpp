#include<iostream>
using namespace std;
int main()
{
    int n,a[50];
    cout<<"enter how much element you want to store in array";
    cin>>n;
    cout<<"enter"<<n<<"of elment";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"the even no are below"<<endl;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            cout<<" "<<a[i]<<"\n"<<endl;
        }
    }
    return 0;
}