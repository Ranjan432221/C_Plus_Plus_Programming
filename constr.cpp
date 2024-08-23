#include<iostream>
#include<string.h>
using namespace std;
class student{
    int rno;
    char name[50];
    double f;
    public:
    student(int,char[],double);
    student(student& t)
    {
        rno = t.rno;
        strcpy(name,t.name);
        // f = t.f;
    }
    void display();
    // void setdata()
    // {
    //     cout<<"enter the value of a ";
    //     cin>>rno;
    //     cout<<"the valu of name=";
    //     cin.ignore();
    //     cin.getline(name,50);
    //     cout<<"the value of fee=";
    //     cin>>f;
    // }
    void disp()
    {
        cout<<endl<<rno<<"\t"<<name;
    }
};
student::student(int no,char n[],double fee)
{
    rno = no;
    strcpy(name,n);
    f = fee;
}
void student::display()
{
    cout<<endl<<rno<<"\t"<<name<<"\t"<<f;
}
int main()
{
    int a, b ;
    char d[60];
    cout<<"enter ther value of a=";
    cin>>a;
    cout<<"enter vlu of b=";
    cin>>b;
    cout<<"enter any name=";
    cin>>d;
    student s(a,d,b);
    s.display();
    student ranjan(s);
    ranjan.disp();
    return 0;
}