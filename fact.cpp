#include<iostream>
using namespace std;
int main()
{
    int n,f=1,b=1,fff=1;
    int r;
    float result;
    cout<<"enter two number";
    cin>>n>>r;
    for(int i=1;i<=n;i++)
    { 
        f = f*i;
    }
    cout<<f<<endl;
    for(int j=1;j<=r;j++)
    {
        b=b*j;
    }
    cout<<b<<endl;
    for(int k=1;k<=n-r;k++)
    {
        fff=fff*k;
    }
    cout<<fff<<endl;
    result = f/(b*fff);
    cout<<result;
}