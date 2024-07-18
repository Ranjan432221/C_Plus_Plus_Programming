#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"enter the value of a:";
    cin>>a;
    cout<<"enter the value of b:";
    cin>>b;
    cout<<"before swapping a:"<<a<<endl<<"b:"<<b<<endl;;
    temp = a;
    a = b;
    b = temp;
    cout<<"after swapping a:"<<a<<endl<<"b:"<<b;
}