#include<iostream>
using namespace std;
void area()
{
    int a,c;
    cout<<"enter the length and breadth of rectangle=";
    cin>>a>>c;
    int z = a*c;
    cout<<"the are of rectangle ="<<z<<endl;
    int perimeter = 2*(a+c);
    cout<<"the perimetre ="<<perimeter<<endl;
}
void area1()
{
    int v;
    cout<<"enter th e breadth of square=";
    cin>>v;
    int square = v*v;
    cout<<"the area of square is="<<square<<endl;
    int sperimeter = 4*v;
    cout<<"the peerimeter of square="<<sperimeter<<endl;
}
int main()
{
    area();
    area1();
}