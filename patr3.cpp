#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cout<<" "<<char(j+64);
        }
        cout<<"\n";
    }
}