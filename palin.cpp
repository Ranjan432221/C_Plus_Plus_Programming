#include<iostream>
using namespace std;
int main()
{
    int n,c,b,s=0;
    cout<<"enter any no which you want:";
    cin>>n;
    c=n;
    while(n>0)
    {
        b=n%10;
        s=b+(s*10);
        n=n/10;
    }
    if(c==s)
    {
        cout<<"it is palindrome";
    }
    else
    {
        cout<<"it is not palindrome";
    }
    return 0;
}