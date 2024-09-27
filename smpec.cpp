#include<iostream>
using namespace std;
int main()
{
      int a,b,c,d;
    int n;
    cout<<"enter four digit no:";
    cin>>n;
    a = n%10;
    n =n/10;
    b = n%10;
    n = n/10;
    c = n%10;
    d = n/10;
    cout<<d<<" "<<c<<" "<<b<<" "<<a<<endl; 
    int f,g,h,r;
    f = ((a%2==0)?a:0);
    g = ((b%2==0)?b:0);
    h = ((c%2==0)?c:0);
    r = ((d%2==0)?d:0);
    int sum = f*g + g*h +h*r;
    cout<<"sum of product consecutive even digit:"<<f<<'*'<<g<<'+'<<g<<'*'<<h<<'+'<<h<<'*'<<r<<':'<<sum;
    return 0;
}