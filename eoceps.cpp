#include<iostream>
using namespace std;
//n=1234,m=4567,output=4*7+2*5
int main()
{
    int a,b,c,d;
    int n,m;
    cout<<"enter any four digit no:";
    cin>>n;
    cout<<"enter the value of m:";
    cin>>m;
    a = n%10;
    n = n/10;
    b = n%10;
    n = n/10;
    c = n%10;
    d = n/10;
    cout<<"n ="<<d<<c<<b<<a<<endl;
    int r, f, g, h;
    cout<<"find even no:"<<endl;
    r = ((a%2==0)?a:0);
    f = ((b%2==0)?b:0);
    g = ((c%2==0)?c:0);
    h = ((d%2==0)?d:0);
    cout<<r<<f<<g<<h<<endl;
    int p,q,t,s,x,y,z,w;
     x = m%10;
    m = m/10;
    y = m%10;
    m = m/10;
    z = m%10;
    w = m/10;
    cout<<"m ="<<w<<z<<y<<x<<endl;
    cout<<"find odd no :"<<endl;
    p = ((x%2!=0)?x:0);
    q = ((y%2!=0)?y:0);
    t = ((z%2!=0)?z:0);
    s = ((w%2!=0)?w:0);
    cout<<p<<q<<t<<s<<endl;
    int sum = r*p + g*t;
    cout<<r<<'*'<<p<<'+'<<g<<'*'<<t<<':'<<sum<<endl; 

    
}