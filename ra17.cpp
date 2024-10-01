#include<iostream>
using namespace std;
//function prototype
//data type function-name(arguments);
//int sum(int a, int b)--->Acceptable
//int sum(int a,b)-->not Acceptable
int sum(int ,int);
void g();
int main()
{
    int a,b;
    cout<<"enter first number";
    cin>>a;
    cout<<"enter second number:";
    cin>>b;
    cout<<"the sum is:"<<sum(a,b);
    //a,b are actual parameter;
    g();
    return 0;
}
int sum(int num,int num2)
{
    int c;
    c = num+num2;
    //formal parameter num and num2 will be taking valus from actual parameters a and b;
    return c;
}
void g(){
    cout<<"\nhello good morning";
}