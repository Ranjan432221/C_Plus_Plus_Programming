#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter age:"<<endl;
    cin>>age;
    if(age>18)
    {
        cout<<"eligible for vote"<<endl;
    }
    else
    {
        cout<<"not eligiblre for vote";
    }
    return 0;
}
