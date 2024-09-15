#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=6;j++)
        {
            if(i==1||i==3||i==5||(i==2&&j==1)||(i==4&&j==6))
            {
                cout<<"* ";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}