#include<iostream>
using namespace std;
int swap(int a,int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}      //call by value doesnot change
int main()
{
    int x = 2,y = 3;
    cout<<"before swapping:"<<x<<y<<endl;
    swap(x,y);
    cout<<"after swapping:"<<x<<y<<endl;
}