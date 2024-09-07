#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
cout<<"enter three element :";
cin>>a;
cin>>b;
cin>>c;
if(a>b&&a>c)
{
    cout<<"a is greater:"<<a;
}
else if(b>a&&b>c)
{
    cout<<"b is greater:"<<b;
}
else
{
    cout<<"c is greater:"<<c;
}
}
