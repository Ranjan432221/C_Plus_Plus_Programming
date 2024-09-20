#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0,count = 0,b;
    int sum1=0,coun1=0;
    cout<<"enter any no which you want to print:";
    cin>>n;
    while(n>0)
    {
        b = n%10;
        if(b%2==0)
        {
            count++;
            sum+=b;
        }
        else
        {
            coun1++;
            sum1+=b;
        }
        n = n/10;
    }
    cout<<"the sum of even no is="<<sum<<endl;
    cout<<"the sum of odd no is="<<sum1<<endl;
    float dif = sum - sum1;
    cout<<"the dif between odd and even is="<<dif<<endl;
    int half = sum+sum1;
    cout<<"the sum of all digit no:"<<half<<endl;
    float prime = (float)half/2;
    cout<<"the prime no is="<<prime;
}