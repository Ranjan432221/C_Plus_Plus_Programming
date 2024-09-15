#include<iostream>
using namespace std;
int main()
{
    int no;
    cout<<"enter any number is :"<<endl;
    cin>>no;
    if(no>0)
    {
        cout<<"the no is positive"<<endl;
    }
    else if(no<0)
    {
        cout<<"the no is negative"<<endl;
    }
    else
    {
        cout<<"no number";
    }
    return 0;
}