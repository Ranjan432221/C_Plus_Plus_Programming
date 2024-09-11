#include<iostream>
using namespace std;
struct multi
{
    int a,b,c;
};
int main()
{
    struct multi m;
    cout<<"enter ther value of a:"<<endl;
    cin>>m.a;
    cout<<"enter the value of b :"<<endl;
    cin>>m.b;
    m.c = m.a + m.b;
    cout<<"the sum is:"<<m.c;
    return 0;
    
}