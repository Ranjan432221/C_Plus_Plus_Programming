#include<iostream>
using namespace std;
int main()
{
    int i,j,sum=0,count = 0,count1=0,sum1=0,f;
    for(i=10;i<=50;i++)
    {
      f=1;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                f=0;
                break;
            }
        }
        if(f==1){
        sum=sum+i;
        count++;
        }
        if(i%2!=0)
        {
            count1++;
            sum1=sum1+i;
        }
    }
    float avg_prime = (float)sum/count;
    float avg_odd = (float)sum1/count1;
    cout<<"avg of all prime no between 10 and 50 is="<<avg_prime<<endl;
    cout<<"avg of all od no between 10 and 50 is="<<avg_odd<<endl;
    return 0;
}