#include<iostream>
using namespace std;
int main()
{
    int a = 0, b = 1,c;
    int n;
    cout<<"enter any number";
    cin>>n;
    for( int i=0;i<=n;i++)
    {
        cout<<" "<<a;
         c = b;
         b = a;
         a = c + b;
    }
    return 0;
}