#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter thr size of array";
    cin>>n;
    cout<<"enrter the n no of arr"<<n;
    int num[n];
    for(int i=0;i<=n;i++)
    {
        cin>>num[i];
    }
    cout<<"calculate the array num"<<endl;
    int sum=0;
    for(int i=0;i<=n;i++)
    {
        sum+=num[i];
    }
    cout<<"the sum of array is="<<sum;
}