#include<iostream>
#include<cmath>
using namespace std;
class A{
    public:
    void area(int ln,int br)
    {
      
        int area = ln*br;
        cout<<"the area of rectangle="<<area<<endl;
        int peri = 2*(ln+br);
        cout<<"the perimeter of triangle ="<<peri <<endl;
    }
    void area(int a)
    {
        int area = a*a;
        cout<<"the area of square="<<area<<endl;
        int peri = 4*a;
        cout<<"the perimeter of squiare="<<peri<<endl;
    }
    void area(int a,int b,int c)
    {
        float s=float(a+b+c)/2;
        
        int area = sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<"the area of triangle ="<<area<<endl;
        int peri = a+b+c;
        cout<<"the perimeter of triangle ="<<peri<<endl;
    }
    
};

int main()
{
    A obj;
    int ln,br;
    cout<<"enter the ln and br of rectagle="<<endl;
    cin>>ln>>br;
    obj.area(ln,br);
    int b;
    cout<<"enter the side of square="<<endl;
    cin>>b;
    obj.area(b);
    int a1,b1,c1;
    cout<<"enter the value of triangle each side="<<endl;
    cin>>a1>>b1>>c1;
    obj.area(a1,b1,c1);
    return 0;
  
}