#include<iostream>
using namespace std;
//structure in c++;
 typedef struct employee
{
    int eid;
    char favChar;
    float salary;
}ep;
int main()
{
    //struct employee ranjan;
    ep ranjan;
    ranjan.eid = 1;
    ranjan.favChar = 'c';
    ranjan.salary = 1200000;
    cout<<"tha value is:"<<ranjan.salary<<endl;
    cout<<"tha value is:"<<ranjan.eid<<endl;
    cout<<"tha value is:"<<ranjan.favChar<<endl;
    return 0;
}
