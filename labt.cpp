#include<iostream>
using namespace std;
int main()
{
    int n,i,b;
    int  count=0, sum =0;
    int l=1,s = 9;
    cout<<"enter any number which you want:";
    cin>>n;
    while(n!=0)
    {
        b = n%10;
        if(b>l)
        {
            l=b;
        }
        else
        {
            l =l;
        }
        if(s<b)
        {
            s = s;
        }
        else
        {
            s=b;
        }
        count++;
        n =n/10;
    }
    int d = l -s;
    cout<<"the dif is="<<d;
    return 0;
}