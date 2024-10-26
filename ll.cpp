#include<iostream>
using namespace std;
int main()
{
    int a, b;
    int max;
    cout<<"enter any no 1st";
    cin>>a;
    cout<<"enter 2nd no";
    cin>>b;
    max=(a>b)?a:b;
    do
    {
        if(max%a==0&&max%b==0)
        {
           cout<<"lcm="<<max;
            break;
        }
        else
        ++max;
    }while(true);
    return 0;
}