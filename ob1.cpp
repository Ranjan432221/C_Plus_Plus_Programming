#include<iostream>
#include<string>
using namespace std;
class student{
  public:
  int id;
  char ch;
  float marks;
  string myname;
};
int main()
{
    class student s;
    s.id = 144;
    s.ch = 'a';
    s.marks = 60;
    s.myname = "ranjan kumar sahoo";
    cout<<s.id<<endl;
    cout<<s.ch<<endl;
    cout<<s.marks<<endl;
    cout<<s.myname<<endl;
    return 0;
}
