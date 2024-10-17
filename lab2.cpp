#include<iostream>
using namespace std;
int main()
{
    int i,n,f = 1,g=1,h=1;
    cout<<"enter any no:";
    float result;
    cin>>n;
    while(n>0)
    {
        f = f*n;
        n = (n-1);
    }
    cout<<"factorial="<<f;
    return 0;
}