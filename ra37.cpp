#include<iostream>
using namespace std;
struct student
{
    int rollno;
};
int main()
{
    struct student rol;
    rol.rollno = 12;
    struct student *r;
    r = &rol.rollno;
    cout<<"the rol no is:"<<*r;
    return 0;
}