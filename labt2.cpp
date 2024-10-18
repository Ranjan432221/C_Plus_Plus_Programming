#include<iostream>
using namespace std;
int main()
{
    int n1,n2,b,c,r=1,s=0;
    cout<<"enter two number n1 and n2 respectively:";
    cin>>n1>>n2;
    while(n1!=0&&n2!=0)
    {
       b = n1%10;
       c = n2%10;
       if((b%2==0) && (c%2!=0))
       {
         r = b*c;
         s = s+r;
       }
        if((b%2!=0) && (c%2==0))
       {
         r = b*c;
         s = s+r;
       }
       n1 = n1/10;
       n2 = n2/10;
       
    }
    cout<<"s is="<<s;

}