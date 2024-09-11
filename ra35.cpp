#include<iostream>
using namespace std;
struct sum
{
    int a;
    int b;
    int sum;
};
int main()
{
    struct sum c;
    c.a = 14;
    c.b = 15;
    c.sum = c.a + c.b;
    cout<<"the sum is:"<<c.sum;
    return 0;
}