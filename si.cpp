#include<iostream>
using namespace std;
int main()
{
    int p,t,r;
    cout<<"enter the principal:"<<endl;
    cin>>p;
    cout<<"enter the time period:"<<endl;
    cin>>t;
    cout<<"enter the rate of interest:"<<endl;
    cin>>r;
    float si;
    si = p*t*r/100;
    cout<<"the simple interest is:"<<si;
    return 0;
}