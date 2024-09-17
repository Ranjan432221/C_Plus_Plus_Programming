#include<iostream>
using namespace std;
int main()
{
    int i = 0;
    do
    {
        if(i==5)
         {
            i++;
            continue;
         }
         cout<<i<<endl;
         i++;
       
    }
    while(i<=10);
}