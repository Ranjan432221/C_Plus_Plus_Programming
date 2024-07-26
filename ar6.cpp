#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"size of array enter";
    cin>>n;
    cout<<"enter the value in array"<<n<<endl;
    int num[n];
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    cout<<"calculate the max array"<<endl;
    int max = num[0];
    for(int i=0;i<n;i++)
    {
        if(max<num[i])
        max = num[i];
    }
    cout<<" the maximum value from array="<<max;
    return 0;
}