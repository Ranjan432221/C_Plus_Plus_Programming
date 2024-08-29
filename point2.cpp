#include<iostream>
using namespace std;
int main()
{
    int ar[10]={10,20,50,40,60,80,70,25,45,65};
    for(int i=0;i<=9;i++)
    {
        cout<<" "<<*(ar+i)<<"\n";
    }
}