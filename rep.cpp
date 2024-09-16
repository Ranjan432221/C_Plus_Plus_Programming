#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the value of a=";
    cin>>a;
    cout<<"enter the value of b=";
    cin>>b;
    while(a!=b)
    {
        if(a>b)
        {
            a-=b;
        }
        else
        {
            b-=a;
        }
    }
    cout<<"hcf="<<a;
    return 0;
}