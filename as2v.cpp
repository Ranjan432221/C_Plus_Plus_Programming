#include<iostream>
using namespace std;
int main()
{
    int count=0,count1=0,sum=0,sum1=1,b,n;
    cout<<"enter any no which you want to print";
    cin>>n;
    while(n>0)
    {
        b = n%10;
        if(b%2==0&&b%4!=0&&b%6!=0)
        {
            count++;
            sum*=b;
        } 
        if( b%2!=0&&b%5!=0&&b%7!=0)
        {
            sum1*=b;
        }
        n = n/10;
    }
    float result = sum + sum1;
    cout<<"the sum of consecutive product of sum and even no="<<result;
}