#include<iostream>
#include<string>
using namespace std;
class myclass{
    public:
    int myname;
    string mystring;
};
int main()
{
    class myclass myobj;
    myobj.myname = 15;
    myobj.mystring = "ranjan kumar sahoo";
    cout<<myobj.myname<<endl;
    cout<<myobj.mystring<<endl;
    return 0;
}