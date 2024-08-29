#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int *p;
    p=&i;
    while(*p<=10)
    {
        cout<<" "<<*p<<"\n";
        (*p)++;
    }
}