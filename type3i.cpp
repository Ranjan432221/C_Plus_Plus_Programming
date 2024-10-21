#include<iostream>
using namespace std;
int area(int l,int b)
{
    int area = l*b;
    return area;
}
int area1(int a)
{
    int area1 = a*a;
    return area1;
}
int main()
{
    int x,y,z;
    cout<<"enter length asnd breadth of rectangle =";
    cin>>x>>y;
    int rectangle = area(x,y);
    cout<<"the area of rectyangle ="<<rectangle<<endl;
    cout<<"enter the breadth of square=";
    cin>>z;
    int square = area1(z);
    cout<<"the area of squasre="<<square;
}