#include<iostream>
using namespace std;
int main()
{
    //what is pointer-->pointer is a data type which holds the address of other data type
    int a=3;
    int* b;
    b = &a;
    cout<<"the address of a is"<<&a<<endl;
    cout<<"the address of a is :"<<b<<endl;
    cout<<"the value at address b is:"<<*b<<endl;
    //&-->address of operator
    //*-->dereference of operator(value of operator)
    //pointer to pointer
    int** c = &b;
    cout<<"the address of b is:"<<&b<<endl;
    cout<<"the address of b is :"<<c<<endl;
    cout<<"the value of address c is:"<<*c<<endl;
    cout<<"the addrsess of address of c is :"<<**c<<endl;



    return 0;
}