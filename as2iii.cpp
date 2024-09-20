#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter any no which you want to print:";
    cin>>n;
    int count=0,sum=0,count1=0,sum1=0,b;
    while(n>0)
    {
        b = n%10;
        if(b%2==0&&b%6!=0&&b%4!=0)
        {
            count++;
            sum+=b;
        }
        if(b%2!=0&&b%3!=0&&b%5!=0)
        {
            count1++;
            sum1+=b;
        }
        n = n/10;
    }
    float avg = (float)sum/count;
    cout<<"avg of all even no="<<avg<<endl;
    float avg1 = (float)sum1/count1;
    cout<<"avg of all odd no is="<<avg1<<endl;
    float dif = avg -avg1;
    cout<<"difference between avg of all even no and all odd no="<<dif<<endl;
    return 0;
}