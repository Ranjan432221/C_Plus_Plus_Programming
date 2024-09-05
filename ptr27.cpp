#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
           if((i+j)>=6)//right sight lower triangle
           {
            cout<<" *";
           }
           else
           {
            cout<<"  ";
           }
        }
        cout<<"\n";
    }
}