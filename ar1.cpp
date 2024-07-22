#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array";
    cin>>n;
    cout<<"enter the n no of array="<<n;
    int num[n];
    for(int i=0;i<=n;i++)
    {
        cin>>num[i];
    }
    cout<<"calculate the array num"<<endl;
    for(int i=0;i<=n;i++)
    {
        cout<<" "<<num[i]<<endl;
    }
    cout<<"the reverse of array is"<<endl;
    for(int i=n;i>=0;i--)
    {
        cout<<" "<<num[i];
    }
    return 0;
}