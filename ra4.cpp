#include<iostream>
using namespace std;
int main()
{
    int a = 4;
    int b = 5;
    cout<<"operator in c++";
    cout<<"following are operators in c++"<<endl;
    //Arithmetic operators
    cout<<"the value of a + b is:"<<a+b<<endl;
    cout<<"the value of a - b is:"<<a-b<<endl;
    cout<<"the value of a * b is:"<<a*b<<endl;
    cout<<"the value of a / b is:"<<a/b<<endl;
    cout<<"the value of a % b is:"<<a%b<<endl;
    cout<<"the value of a++  is:"<<a++<<endl;
    cout<<"the value of a-- is:"<<a--<<endl;
    cout<<"the value of ++a is:"<<++a<<endl;
    cout<<"the value of --a is:"<<--a<<endl;
    cout<<endl;
    //asignment operators-->used to asign values to variables
 // =	x = 5	x = 5	
//+=	x += 3	x = x + 3	
//-=	x -= 3	x = x - 3	
//*=	x *= 3	x = x * 3	
//=	x /= 3	x = x / 3	
//%=	x %= 3	x = x % 3	
//&=	x &= 3	x = x & 3	
//|=	x |= 3	x = x | 3	
//^=	x ^= 3	x = x ^ 3	
//>>=	x >>= 3	x = x >> 3	
//<<=	x <<= 3	x = x << 3	
   

   //comparision operator:
   cout<<"following are these comparision operator in c++:"<<endl;
   cout<<"the value of a == b is :"<<(a==b)<<endl;
   cout<<"the value of a =! b is :"<<(a=!b)<<endl;
   cout<<"the value of a > b is :"<<(a>b)<<endl;
   cout<<"the value of a < b is :"<<(a<b)<<endl;
   cout<<"the value of a <= b is :"<<(a<=b)<<endl;
   cout<<"the value of a >= b is :"<<(a>=b)<<endl;


   //logical operators:
   cout<<"following are the logical operator in c++:"<<endl;
   cout<<"the value of this logical 'and' operator:((a==b)&&(a<b)) :"<<((a==b)&&(a<b))<<endl;
   cout<<"the value of this logical 'or'  operator:((a==b)||(a<b)) :"<<((a==b)||(a<b))<<endl;
   cout<<"the value of this logical 'not' operator:(!(a==b)) :"<<(!(a==b))<<endl;

}