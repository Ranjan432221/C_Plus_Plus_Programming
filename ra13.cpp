#include<iostream>
using namespace std;
int main()
{
    //array in c++i
    int marks[4]={23,45,56,89};
    //we can chang the value of an array:
    //marks[2] = 455;
   // cout<<marks[0]<<endl;
   // cout<<marks[1]<<endl;
    //cout<<marks[2]<<endl;
    //cout<<marks[3]<<endl;
    //cout<<marks[2]<<endl;
   // for( int i=0;i<4;i++)
    {
      //  cout<<marks[i]<<endl;
        //quick quize :do the same using while and do while loops?
    }
    //pointers and array
    //pointer arithmetic
  //address new=address current + i*sizeof(datatype)
  //(p+i)          p
  int* p = marks;
  cout<<*(p++)<<endl;
  cout<<*(++p);
  //cout<<"the value of marks[0] is"<<*p<<endl;
  //cout<<"the value of marks[0] is"<<*p+1<<endl;
  //cout<<"the value of marks[0] is"<<*p+2<<endl;
  //cout<<"the value of marks[0] is"<<*p+3<<endl;
}