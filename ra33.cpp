#include<iostream>
using namespace std;
union students
{
    int id;
    float marks;
    char a;
   // char name[200];
};
int main()
{
    union students s;
    //strcpy(s.name,"ranjan kumar sahoo");
    //cout<<"name:"<<s.name;
   // s.id = 145;
    s.marks = 60;
    s.a = 't';
    s.id = 145;
   // cout<<s.a;
   cout<<s.id;
   //cout<<s.marks;
    return 0;
}