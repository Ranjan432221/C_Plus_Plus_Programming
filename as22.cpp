#include<iostream>
using namespace std;
int main()
{
    int m,n;
    int b,c,v=0,u=0,result =0;
     cout<<"enter the valu of n=";
     cin>>n;
    cout<<"enter the value of m=";
    cin>>m;
    while(m>0&&n>0)
    {
        b = n%10;
        c = m%10;
        u = b*c;
        result = result+u;
        n=n/10;
        m=m/10;

    }   
    cout<<"the sum of m and n is="<<result;
}