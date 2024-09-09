#include<iostream>
using namespace std;
int main()
{
    int n,sum = 0,count = 0;
    cout<<"enter any no :";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            sum+=i; 
        }
    }
     cout<<"the sum is:"<<sum<<endl;
}