#include<iostream>
using namespace std;
int main()
{
    int i,n,f = 1;
    cout<<"enter any no:";
    cin>>n;
    do
    {
        f = f*n;
        n = (n-1);
    }
    while(n>0);
    cout<<"factorial="<<f;
    return 0;
}