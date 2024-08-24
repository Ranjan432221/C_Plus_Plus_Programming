#include<iostream>
using namespace std;
class ranjan{
    int real,imag;
      friend ranjan sum_complex(ranjan obj1,ranjan obj2);
    public:
    void set_data(int r,int i)
    {
        real = r;
        imag = i;
    }
    void print_number()
    {
        cout<<"your number"<<real<<"+"<<imag<<"i"<<endl;
    }
    void set_inputdata()
    {
        cout<<"enter the value of x";
        cin>>real;
        cout<<"enter the value of y";
        cin>>imag;
    }
};
ranjan sum_complex(ranjan obj1,ranjan obj2)
{
    ranjan obj3;
    obj3.set_data((obj1.real+obj2.real),(obj1.imag+obj2.imag));
    return obj3;
}
int main()
{
    ranjan c1,c2,c3;
    c1.set_data(2,5);
    c1.print_number();
    c2.set_data(4,3);
    c2.print_number();
    c3 = sum_complex(c1,c2);
    c3.print_number();
    return 0;
}