#include<iostream>
#include<string>
using namespace std;
class ranjan{
    public:
     string name;
    int id;
    void print_name()
    {
        cout<<"the name ="<<name<<endl;
    }
   void print_id();
};
void ranjan::print_id()
{
    cout<<"the id="<<id<<endl;
}
int main()
{
    ranjan obj;
    obj.name = "ranjan kumar sahoo";
    obj.id = 5;
    obj.print_name();
    obj.print_id();
    return 0;
}