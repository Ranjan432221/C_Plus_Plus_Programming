#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter any number:";
    cin>>n;
    int a, b, c, d;
    a = n%10;
    n = n/10;
    b = n%10;
    n = n/10;
    c = n%10;
    d = n/10;
    cout<<"the face vlue of any number is:"<<d<<"\t"<<c<<"\t"<<b<<"\t"<<a<<endl;
    cout<<"the position valu of any number is:"<<d*1000<<"\t"<<c*100<<"\t"<<b*10<<"\t"<<a*1<<endl;
    return 0;
}