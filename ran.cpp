#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"enter the value of x is :"<<endl;
    cin>>x;
    cout<<"enter the vaklue of y is :"<<endl;
    cin>>y;
    cout<<"enter the value of z is:"<<endl;
    cin>>z;
    if(x>y&&x>z)
    {
        cout<<"xis greater"<<endl;
    }
    else if(y>x&&y>z)
    {
        cout<<"y is greater"<<endl;
    }
    else
    {
        cout<<"z is greater";
    }
    return 0;
}