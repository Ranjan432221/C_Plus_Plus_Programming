#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    int n,t;
    cout<<"enter any no:";
    cin>>n;
    a = n%10;
    n = n/10;
    b = n%10;
    n = n/10;
    c = n%10;
    n= n/10;
    d=n%10;
    cout<<"1 for 10\n 2 for 100\n3for1000\n enter your choice";
    cin>>t;
    (t==1)?(cout<<"result is"<<b): cout<<" ";
    (t==2)?(cout<<"result is"<<c):cout<<" ";
    (t==3)?(cout<<"result is"<<d):cout<<" ";


}