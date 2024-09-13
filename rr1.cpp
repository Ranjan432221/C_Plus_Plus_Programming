#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=10;i++)
    {
        if(i==6)
        {
            continue;
        }
        cout<<endl<<i;
    }
}