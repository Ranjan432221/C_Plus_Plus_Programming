#include<iostream>
using namespace std;
    int main()
    {
        char ch;
        cout<<"enter any alphabet:";
        cin>>ch;
        switch(ch)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            cout<<"it is vowl"<<endl;
            break;
            default:
            cout<<"it is consonant";
        }
        return 0;
    }