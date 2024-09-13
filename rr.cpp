#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    int sum;
    float avg;
    cout<<"enter three number:";
    cin>>a>>b>>c;
    sum=a+b+c;
    avg= (float)sum/3;
    cout<<"sum:"<<sum<<endl;
    cout<<"avg:"<<avg<<endl;
    return 0;

}