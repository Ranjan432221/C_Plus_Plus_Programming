#include<iostream>
using namespace std;
int factorial(int n)
{
    int f = 1;
    while(n>0)
    {
        f = f*n;
        n = n-1;
    }
    return f;
}
int main()
{ 
    int a;
    cout<<"enter the no which you want to print the factorial=";
    cin>>a;
    int b = factorial(a);
    cout<<"the factorial ="<<b;
    return 0;
}