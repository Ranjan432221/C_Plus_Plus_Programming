#include <iostream>
using namespace std;
class ranjan
{
    private:
    int a,b,c;
    public:
    int d,e;
    void setdata(int r,int s, int t);//declaration
    void getdata()
    {
        cout<<"the value of a="<< a <<endl;
        cout<<"the value of b="<< b <<endl;
        cout<<"the value of c="<< c <<endl;
        cout<<"the value of d="<< d <<endl;
        cout<<"the value of e="<< e <<endl;
    }
};
void ranjan:: setdata(int r,int s,int t)
{
    a = r;
    b = s;
    c = t;
}
int main()
{
    ranjan data;
    //data.a = 34;=>it will give wrong ans cause of it a is a private declaration
    data.d =45;
    data.e = 23;
    data.setdata(1,2,4);
    data.getdata();
    return 0;
}