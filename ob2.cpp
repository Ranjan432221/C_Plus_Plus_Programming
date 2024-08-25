#include<iostream>
#include<string>
using namespace std;
class ranjan
{
    public:
    int id;
    int a,b,sum =0;
    float avg;
    string name;
    float marks;
};
int main()
{
    class ranjan s;
    cout<<"enter the ist no";
    cin>>s.a;
    cout<<"enter the second no";
    cin>>s.b;
    s.sum = s.a + s.b;
     s.avg = s.sum/2;
    cout<<"sum is:"<<s.sum<<endl;
     cout<<"avg is:"<<s.avg<<endl;
    s.id = 145;
    s.marks = 60;
    s.name = "ranjan kumar sahoo";
    cout<<"name:"<<s.name<<endl;
    cout<< "marks:"<<s.marks<<endl;
    cout<<"id is:"<<s.id<<endl;
    return 0;
    
}