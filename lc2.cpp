#include<iostream>
using namespace std;
void sum(int a,int b)
{
    int sum = a+b;
    cout<<"sum is"<<sum;
}
int main()
{
    int x,y;
    cout<<"enter twop no which you want to print";
    cin>>x>>y;
    sum(x,y);
}