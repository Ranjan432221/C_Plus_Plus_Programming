#include<iostream>
using namespace std;
class point{
    private:
    int x,y;
    public:
    point(int x1,int y1)
    {
        x = x1;
        y = y1;
    }
    //copy constructor 
    point(const point& p1)
    {
        x = p1.x;
        y = p1.y;
    }
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }
};
int main()
{
    point p1(10,15);//normal constructor is called here
    point p2 = p1;//copy constructor is called here
    //let us access value assigned by constructore
    cout<<"p1.x="<<p1.getx()<<endl;
    cout<<"p1.y ="<<p1.gety()<<endl;
    cout<<"p2.x="<<p2.getx()<<endl;
    cout<<"p2.y="<<p2.gety()<<endl;
    return 0;
}