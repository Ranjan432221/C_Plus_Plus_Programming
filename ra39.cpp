#include<iostream>
using namespace std;
int main()
{
    int i;
    int n;
    int count = 0;
    cout<<"enter any number which you want:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
       if(n%i==0)
       {
        count++;
       }
    }
    if(count==2)//it is not running i dont know how it will be happening
        cout<<"it is prime"<<endl;
    else
        cout<<"it is not prime";
    return 0;
}