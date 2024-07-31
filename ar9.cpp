#include<iostream>
using namespace std;
int main()
{
    int a[40],b[40],c[80],n;
    cout<<"enter array size";
    cin>>n;
    cout<<"eneter the 1st element";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"eneter 2nd element"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    cout<<"merging third array is given below"<<endl;
    for(int i=0;i<n*2;i++)
    {
        if(i<n)
        {
            c[i]=a[i];
        }
        else
        {
            c[i]=b[i-n];
        }
         cout<<" "<<c[i];
    }
     return 0;
}