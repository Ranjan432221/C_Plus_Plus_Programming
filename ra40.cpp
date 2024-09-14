#include<iostream>
using namespace std;
int main()
{
    int n;
    int i,count=1;
    cout<<"enter the any no:";
    cin>>n;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            count=0;
        }
        break;
    }
    if(count)
    {
        cout<<"prime"<<endl;
    }
    else
    {
        cout<<"it is not prime";
    }
}