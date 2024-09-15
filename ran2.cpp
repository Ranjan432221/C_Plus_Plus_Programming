#include<iostream>
using namespace std;
typedef int ram;
int main()
{
    ram no;
    cout<<"enter any number:"<<endl;
    cin>>no;
    if(no%2==0)
    {
        cout<<"it is a even number"<<endl;
    }
    else
    {
        cout<<"it is a odd number";
    }
    return 0;
}