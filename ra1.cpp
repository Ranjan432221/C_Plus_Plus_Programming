#include<iostream>
using namespace std;
int glo = 6;      //<--//global variable
void sum()
{
    cout<<glo;
    int a;
}
int main()
{
    int glo = 8;     //<----local variable
    glo = 23;
    bool is_true = true;
   // cout<<is_true<<endl;
   // int sum =6;//
    cout<<"hello world"<<endl;
    //cout<<"\nitis very eadsy j.\njhfkjdvkjhgk,lkjkjhfjhgjfghjhdsgj"<<"\njhgdjfjgkj";
  //cout<<glo;
  sum();
  cout<<endl<<glo<<endl<<is_true;
}