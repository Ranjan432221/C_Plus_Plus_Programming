#include<iostream>
using namespace std;
//call by reference using pointer
int swapPointer(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
//call by reference in c++
int swapReference(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x=4,y = 5;
    cout<<"the value of x is"<<x<<"and the value of y is"<<y<<endl;
   // swapPointer(&x,&y);
   swapR   eference(x,y);
    cout<<"the value of x is"<<x<<"the value of y is"<<y<<endl;
    return 0;
}