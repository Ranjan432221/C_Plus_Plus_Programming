#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char ch;
    cout<<"enter two no:";
    cin>>a>>b;
    cout<<"add '+'\nsub '-'\ndiv'/'\nmulti'*'"<<endl;
     cout<<"enter sign which you want:"<<endl;
    cin>>ch;
    switch(ch)
    {
        case '+':
        cout<<"sum of two no is:"<<a<<'+'<<b<<':'<<a+b<<endl;
        break;
        case '-':
        cout<<"sub straction is:"<<a-b<<endl;
        break;
        default:
        cout<<"out";
        break;
    }
}