#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter two number ";
    cin>>a>>b;
    int max = (a>b)?a:b;
    do
    {
        if(max%a==0&&max%b==0)
        {
             cout<<"lcm="<<max;
             break;
        }
        else
        {
            max++;
        }
    }while(true);
    return 0;
}