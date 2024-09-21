#include<iostream>
using namespace std;
int main()
{
    int b,c,m,n,multi=1;
    float sum=0;
    cout<<"enter the value of n=";
    cin>>n;
    cout<<"enter the value of m=";
    cin>>m;
    while(m>0&&n>0)
    {
        b = n%10;
        c = m%10;
        if(b%2==0&&c%2!=0)
        {
            multi = b*c;
            sum = sum+multi;
        }
        n =n/10;
        m = m/10;
    }
    cout<<"the sum of product of consecutive no ="<<sum;
    return 0;
}