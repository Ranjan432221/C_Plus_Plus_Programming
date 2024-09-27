#include<iostream>
using namespace std;
//the sum of product of two consecutive no e.g=>n= 1234,m = 7896
//output=6*4+9*3+8*2+7*1;
int main()
{
    int a,b,c,d;
    int n;
    int m;
    cout<<"enter 4digit no n:";
    cin>>n;
    cout<<"enter 4 digit no m:";
    cin>>m;
    a = n%10;
    n = n/10;
    b = n%10;
    n = n/10;
    c = n%10;
    d = n/10;
      cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
      int e,f,g,h,r;
    e = m%10;
    m = m/10;
    f = m%10;
    m = m/10;
    g = m%10;
    h = m/10;
    r = e*a + f*b + g*c + h*d;
    cout<<e<<" "<<f<<" "<<g<<" "<<h<<endl;
    cout<<e<<'*'<<a<<'+'<<f<<'*'<<b<<'+'<<g<<'*'<<c<<'+'<<h<<'*'<<d<<':'<<r;
    return 0;

}