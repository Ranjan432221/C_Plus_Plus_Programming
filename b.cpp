#include<iostream>
using namespace std;
int main()
{
    int p,t,r;
    float si;
    cout<<"enter principale p:";
    cin>>p;
    cout<<"enter time T:";
    cin>>t;
    cout<<"enter rate of interest R:";
    cin>>r;
    si= p*t*r/100;
    cout<<"si:"<<si<<endl;
}