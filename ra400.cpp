#include<iostream>
using namespace std;
int main()
{
    int i,n,count=1;
    cout<<"enter any no:";
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
        cout<<"it is prime"<<endl;
    }
    else
    {
        cout<<"it is not";
    }
    return 0;
}