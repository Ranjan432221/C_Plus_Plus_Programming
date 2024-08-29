#include<iostream>
using namespace std;
int main()
{
    int *p,*q,*r,a,b,c;
    cout<<"enter the value of a=";
    cin>>a;
    cout<<"enter the value of b=";
    cin>>b;
    p=&a;
    q=&b;
    r=&c;
    *r = *p+*q;
    cout<<"sum of value is*r="<<*r;
    return 0;

}