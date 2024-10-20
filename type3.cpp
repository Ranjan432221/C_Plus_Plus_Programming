#include<iostream>
using namespace std;
int sum()
{
    int a,b;
    cout<<"enter any no which you want to print";
    cin>>a>>b;
    int sum = a+b;
    return sum;
}
int main()
{
    int c;
    c=sum();
    cout<<c;
}