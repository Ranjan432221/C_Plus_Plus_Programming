#include<iostream>
using namespace std;
int area(int l,int b)
{
    int area = l*b;
    int peri = 2*(l+b);
    cout<<"the perimetre of rectangle is ="<<peri<<endl;
    return area;
}
int area1(int a)
{
    int area1 = a*a;
    int speri = 4*a;
    cout<<"the perimetre of square = "<<speri<<endl;
    return area1;
}
int main()
{
    int x,y,z;
    cout<<"enter length and bfreadth of rectangle";
    cin>>x>>y;
    int rectangle = area(x,y);
    cout<<"the area of rectangle is="<<rectangle<<endl;
    cout<<"enter the breadth of square";
    cin>>z;
    int square = area1(z);
    cout<<"the area of square ="<<square;
}