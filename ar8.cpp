#include<iostream>
using namespace std;
int main()
{
    int n,a[50],b[50];
    cout<<"enter the size of element";
    cin>>n;
    cout<<"enter the"<<" "<<n<<" "<<"of element"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"print the array";
    for(int i=0;i<n;i++)
    {
        cout<<" "<<a[i]<<endl;
        b[i]=a[i];
    }
    cout<<"this is copy array given below"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<" "<<a[i];
    }
    return 0;
}