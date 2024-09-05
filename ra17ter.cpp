#include<iostream>
using namespace std;
int main()
{
    int i = 0;
    while(i<=10)
    {
        if(i==6)
        {
            i++;
            continue;
        }
        cout<<i<<endl;
        i++;
    }
    return 0;
}