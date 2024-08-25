#include<iostream>
using namespace std;
int main()
{
    int i;
    int count=1;
    int n;
    cout<<"enter any no which you want";
    cin>>n;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            count =0;
        }
        break;
    }
    if(count)
    {
        cout<<"it is prime no";
    }
    else
    {
        cout<<"it is not a prime no";
    }
    return 0;
}