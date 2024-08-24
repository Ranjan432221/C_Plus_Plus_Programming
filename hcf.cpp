#include<iostream>
using namespace std;
int main()
{
    int a,b,hcf;
    cout<<"enter two number:";
    cin>>a>>b;
    if(a>b)
    {
        int temp = b;
        b = a;
        a = temp;
    }
    for(int i=1;i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            hcf = i;
        }
    }
    cout<<"hcf="<<hcf;
    return 0;
}