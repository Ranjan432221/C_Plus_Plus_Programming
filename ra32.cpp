#include<iostream>
using namespace std;
int main()
{
    enum day{sunday,monday,tuesday,wednesday,thursday,friday,saturday};
   enum day m;
    m = wednesday;
    cout<<"the value of wednesday is"<<m;
    return 0;
}