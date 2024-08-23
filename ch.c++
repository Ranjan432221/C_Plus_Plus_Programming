#include<iostream>
using namespace std;
int main()
{
    char ch;
    int a,b;
    cout<<"enter the value of a:"<<endl;
    cin>>a;
    cout<<"enter the value of b:"<<endl;
    cin>>b;
     cout<<'+'<<'-'<<'*'<<'/'<<endl;
    cin>>ch;
    switch(ch)
 {
    case '+':
    cout<<"the sum is:"<<a+b<<endl;
    break;
    case '-':
    cout<<"the substaraction:"<<a-b<<endl;
    break;
    case '*':
    cout<<"the multiplication:"<<a*b<<endl;
    break;
    case '/':
    cout<<"the division is:"<<a/b<<endl;
    break;
    default:
    cout<<"these are wrong";
  }
  cout<<"ans always perfect";

}