#include<iostream>
using namespace std;
void area(int l,int b)
{
    int area = l*b;
    cout<<"the area of rectangle="<<area<<endl;
    int peri = 2*(l+b);
    cout<<"the perimeter of rectangle="<<peri<<endl;
}
void area1(int z)
{
    int area1 = z*z;
    cout<<"the rea of square is="<<area1<<endl;
    int speri = 4*z;
    cout<<"the perimeter of square ="<<speri<<endl;
}
int main()
{
    int a,c,d;
    cout<<"enter length and breadth of rectangle=";
    cin>>a>>c;
    area(a,c);
    cout<<"enter the breadth of square=";
    cin>>d;
    area1(d);

}