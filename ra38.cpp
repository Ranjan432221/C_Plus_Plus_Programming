#include<iostream>
using namespace std;
int main()
{
    int b,p,f=1;
    cout<<"enter base no";
    cin>>b;
    cout<<"enter power";
    cin>>p;
    for(int i=0;i<p;i++)
    {
        f = f*b;
    }
    cout<<"power is"<<f;
}