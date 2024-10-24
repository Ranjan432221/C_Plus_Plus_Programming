#include<iostream>
using namespace std;
int main()
{
    int n;
    int arm=0,b,c;
    cout<<"enter any no";
    cin>>n;
    c = n;
    while(n>0)
    {
        b = n%10;
        arm = arm+(b*b*b);
        n = n/10;
    }
    if(c==arm)
    {
        cout<<"it is armstrong no";
    }
    else
    {
        cout<<"it is not armstroong no";
    }
    return 0;
}