#include<iostream>
using namespace std;
class complex{
    //it is operator overloading
    int real,imag;
    public:
    complex(int r=0,int i=0)
    {
        real = r;
        imag = i;
    }
    complex operator+(complex const & obj)
    {
        complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void input_data()
    {
        cout<<"enter the value of a=";
        cin>>real;
        cout<<"enter the value of b=";
        cin>>imag;
    }
    void print()
    {
        cout<<"the sum of real and imaginary num="<<real<<"+i"<<imag<<endl;
    }
};
int main()
{
    complex c1,c2;
    c1.input_data();
    c2.input_data();
    complex c3 = c1 + c2;
    c3.print();
    return 0;
}