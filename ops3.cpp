#include<iostream>
#include<string>
using namespace std;
class ranjan{
    public:
    int id;
    string name;
    char a[100];
    
    int x1,y;
    int count;
    void print_id()
    {
        /*cout<<"enter the id of member";
        cin>>id;
        count++;*/
     int x = x1+y;
        cout<<"sum is ="<<x;
    }
     ranjan(int a,int b)
     {
      x1=a;
      y=b;
        
     }
     ranjan operator+(ranjan &O)
     {
        ranjan B;
        B.x1 = x1 + O.x1;
        B.y = y + O.y;
     }
     

};
int main()
{
    
    int a,b;
    ranjan c1(2,3);
    ranjan c2(4,5);
    ranjan c3 ;
    c3= c1+c2;
    c3.print_id();
      cout<<"enter the value of a number a=";
        cin>>a;
        cout<<"enter the value of b=";
        cin>>b;
       ranjan  A(a,b);
    A.print_id();
    return 0;
}