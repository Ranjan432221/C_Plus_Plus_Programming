#include<iostream>
using namespace std;
int sum(int a,int b)
{
    int sum = a+b;
    return sum;
}
int main()
{
    int x,y;
    cout<<"enter any two no";
    cin>>x>>y;
    int c = sum(x,y);
    cout<<"the sum is"<<c;
}