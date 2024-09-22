#include<iostream>
using namespace std;
int main()
{
    int n;
    int a, b, c, d,e,f,g,h;
    cout<<"enter any four digit number:";
    cin>>n;
    a = n%10;
    n = n/10;
    b = n%10;
    n = n/10;
    c = n%10;
    d = n/10;
    e = a*b + b*c + c*d;
    cout<<"the four digitno the sum of product of consecutive no is:"<<endl;
    cout<<a<<'*'<<b<<'+'<<b<<'*'<<c<<'+'<<c<<'*'<<d<<':'<<e;

    return 0;
}
