#include<iostream>
using namespace std;
int main()
{
    int mark;
    char grade;
    cout<<"enter students marks:";
    cin>>mark;
    switch(mark/10)
    {
        case 10:
        case 9:
        cout<<"grade A"<<endl;
        break;
        case 8:
        cout<<"grade B"<<endl;
        break;
        case 7:
        cout<<"grade C"<<endl;
        break;
        case 6:
        cout<<"grade is D"<<endl;
        break;
        case 5:
        cout<<"grade is E"<<endl;
        break;
        default:
        cout<<"fail"<<endl;
        break;
    }
}