#include <iostream>
using namespace std;
int main()
{
    int no,i,a,b=1,c=0;
    cout<<"enter anynumber which you want:";
    cin>>no;
    for(i=1;i<=no;i++)
    {
        cout<<c<<endl;
        a=b;
        b=c;
        c=a+b;
    }
}