#include<iostream>
using namespace std;
 inline int product(int a, int b)//inline argument
 //inline function function are used to reduce the function call
 //when one function is being called muultiple times in program it increase the execution time ,
 //so inline function is used to reduce time and increase program efficiency//
{
    return a*b;
}
int main()
{
    int x,y;
    cout<<"enter the value of a=";
    cin>>x;
    cout<<"enter the value of b=";
    cin>>y;
    cout<<"the product of x and y is ="<<product(x,y)<<endl;
    cout<<"the product of x and y is ="<<product(x,y)<<endl;
    cout<<"the product of x and y is ="<<product(x,y)<<endl;
    cout<<"the product of x and y is ="<<product(x,y)<<endl;
    cout<<"the product of x and y is ="<<product(x,y)<<endl;
    cout<<"the product of x and y is ="<<product(x,y)<<endl;
    cout<<"the product of x and y is ="<<product(x,y)<<endl;
    cout<<"the product of x and y is ="<<product(x,y)<<endl;
    return 0;
}