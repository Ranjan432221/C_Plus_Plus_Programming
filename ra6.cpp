#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    //int a = 454;
    //cout<<"the value of a is :"<<a<<endl;
    //a = 45;
   // cout<<"the value of a is:"<<a<<endl;
    //constant in c++:
   // const int a = 3;
   // cout<<"the value of a is:"<<a<<endl;
   // a = 45;//you will get an error because a is a constant
   // cout<<"the value of a is:"<<a<<endl;

    //manupulator in c++ is endl, setw:
    //endl is a manupulators
     //int a = 3,b = 78, c = 1244;
     //cout<<"the value of a without setw is:"<<a<<endl;
     //cout<<"the value of b without setw is:"<<b<<endl;
     //cout<<"the value of c without setw is:"<<c<<endl;
     //cout<<"the value of c wit setw is:"<<setw(4)<<a<<endl;
     //cout<<"the value of c wit setw is:"<<setw(4)<<b<<endl;
     //cout<<"the value of c wit setw is:"<<setw(4)<<c<<endl;


     //operator precedence
    // when operators are in same precedence then that time we have to check associativity
     int a = 4,b = 6;
     int c = a * 5 + b - 45 + 87;
     cout<<c;
     return 0;

}