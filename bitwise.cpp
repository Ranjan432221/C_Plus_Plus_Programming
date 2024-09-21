#include<iostream>
using namespace std;
int main()
{

    int  a, b;
    cout<<"enter two value of a and b:";
    cin>>a>>b;
    int c = a&b;
    int d = a|b;
    int e = a^b;
    cout<<"a\t b\t a&b\t a|b\t a^b:"<<endl;
    cout<<a<<"\t"<<b<<"\t"<<c<<"\t"<<d<<"\t"<<e;
    return 0;
}