#include<iostream>
using namespace std;
int main()
{
    int n,b,c,p=0;
    cout<<"enter any no which you want to print"<<endl;
    cin>>n;
    c=n;
    while(n>0)
    {
       b = n%10;
       p = b+(p*10);
       n = n/10;
    }
    if(c==p)
    {
        cout<<"it is palinrome no";
    }
    else
    {
        cout<<"it is not palindrome no";
    }
    return 0;
}