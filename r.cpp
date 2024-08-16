#include<iostream>
using namespace std;
int main()
{
    int n,f=1;
    cout<<"enter any number which you want to print";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        f = f*n;
        n = n-1;
    }
    cout<<"the factorial ="<<f<<endl;
}