#include<iostream>
using namespace std;
int main()
{
    int a[50],b[50],c[50],n;
    cout<<"enter the size of array to store in single arrarray";
    cin>>n;
    cout<<"enter the 1st array element"<<n<<endl;
    for(int i=0;i<=n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter 2nd arrauy element="<<endl;
    for(int i=0;i<=n;i++)
    {
        cin>>b[i];
    }
    cout<<"sum of array 1st and 2nd"<<endl;
    for(int i=0;i<=n;i++)
    {
        c[i] = a[i]+b[i];
        cout<<"the sum  of single array is="<<c[i];
    }
    return 0;
}