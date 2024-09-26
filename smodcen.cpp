#include<iostream>
using namespace std;
int main()
{
     int a,b,c,d;
    int n;
    cout<<"enter any four digit no:";
    cin>>n;
    a = n%10;
    n = n/10;
    b = n%10;
    n = n/10;
    c = n%10;
    d = n/10;
    cout<<d<<" "<<c<<" "<<b<<" "<<a<<endl;
    int r,g,h,j;
    r = ((a%2!=0)?a:0);
    g = ((b%2!=0)?b:0);
    h = ((c%2!=0)?c:0);
    j = ((d%2!=0)?d:0);
    int sum = r*g + g*h + h*j;
    cout<<r<<'*'<<g<<'+'<<g<<'*'<<h<<'+'<<h<<'*'<<j<<':'<<sum<<endl;
    return 0;
    
}