#include<iostream>
using namespace std;
int main()
{
    int n;
    int b,f;
    cout<<"enter any no";
    cin>>n;
    f = n%10;
    while(n!=0)
    {
        b = n%10;
        n=n/10;
    }
    cout<<"1st element:"<<b<<endl<<"last element:"<<f;
    return 0;
}