#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum =0;
    int count = 0;
    float avg;
    cout<<"enter any no no which you want:";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        if(i%2!=0)
        {
            sum+=i;
            count++;
        }
        avg= (float)sum/count;
    }
    cout<<"the sum is:"<<sum<<endl;
    cout<<"the avg is:"<<avg;
}