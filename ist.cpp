#include<iostream>
using namespace std;
int main()
{
    int f,b,n;
    cout<<"enter any no which you want:";
    cin>>n;
    f=n%10;
    while(n>0)
    {
        b = n%10;
        n = n/10;
    }
    cout<<"1st no="<<b<<endl<<"last no="<<f;
    return 0;
}