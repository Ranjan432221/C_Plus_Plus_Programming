#include<iostream>
using namespace std;
int main()
{
    int n;
    int a,b,c,d;
    cout<<"enter any four digit no:";
    cin>>n;
    d = n%10;
    n = n/10;
    c = n%10;
    n = n/10;
    b = n%10;
    a = n/10;
    int f = b&d;
    int g = b|d;
    int h = b^d;
    cout<<"b\t d\t b&d\tb|d\tb^d"<<endl;
    cout<<b<<"\t"<<d<<"\t"<<f<<"\t"<<g<<"\t"<<h;
    return 0;
}