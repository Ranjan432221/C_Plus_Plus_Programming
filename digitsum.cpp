#include<iostream>
using namespace std;
int main()
{
    int n;
    int a, b, c, d, e;
    cout<<"enter any four digit no:";
    cin>>n;
    a = n%10;
    n = n/10;
    b = n%10;
    n = n/10;
    c = n%10;
    d = n/10;
    e = a+b+c+d;
    cout<<"sum of all number in 4 digit number is:"<<e; 
    return 0;
}