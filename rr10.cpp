#include<iostream>
using namespace std;
int main()
{
    int sp,cp;
    cout<<"enter the cost price:"<<endl;
    cin>>cp;
    cout<<"enter the selling price:"<<endl;
    cin>>sp;
    if(sp>cp)
    {
        cout<<"profit"<<endl;
    }
    else
    {
        cout<<"loss";
    }
}