#include<iostream>
#include<string>
using namespace std;
class r{
    int x,y;
   
    public:
     string s;
      void get_name();
    r(int a=0,int b =0)
    {
        x = a;
        y = b;
    }
    void set_data()
    {
        cout<<"enter the value of x=";
        cin>>x;
        cout<<"enter the vsalue of y=";
        cin>>y;
    }
     r operator+(r const& t)
    {
        r u;
        u.x = x + t.x;
        u.y = y + t.y;
        return u;
    }
    void print_data()
    {
        cout<<"the sum of two number ="<<x<<"+"<<y<<"="<<x+y<<endl;
    }
};
void r::get_name()
{
    cout<<"enter any string which you want to print=";
    getline(cin,s);
    cout<<"the name of number="<<s<<endl;
}
int main()
{
    r obj1,obj2,obj;
     r obj4;
    obj4.get_name();
    obj1.set_data();
    obj2.set_data();
    obj.set_data();
    r obj3 = obj1 + obj2 + obj;
    obj3.print_data();
   
    return 0;
}
