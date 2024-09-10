#include<string>
#include<iostream>
using namespace std;
struct student
{
    int id;
    float marks;
};
int main()
{
    struct student r;
       r.id = 1145;
    r.marks = 60;
    //cout<<"name is:"<<r.name;
    cout<<"id is"<<r.id;
    cout<<"marks is:"<<r.marks;
    return 0;
}
