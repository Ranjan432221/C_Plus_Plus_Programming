#include<iostream>
using namespace std;
int main()
{
    //control structure--->if-else
    //else if-->ladder: switch
    int age;
    cout<<"enter the age:"<<endl;
    cin>>age;
  //  if(age>18)
   // {
      //  cout<<"allow to party"<<endl;
  //  }
   // else if(age==18)
  // {
   // cout<<"they dont allow to party:"<<endl;
   //}
   //else
   //{
  //  cout<<"its wrong for all"
  // }
  //control structure switch;
  switch(age)
  {
    case 18:
    cout<<"eligible for party"<<endl;
    break;
    case 19:
    cout<<"eligible for party"<<endl;
    break;
    case 2:
    cout<<"dont go for party"<<endl;
    break;
    default:
    cout<<"dont allow for all"<<endl;
    break;

  }
  cout<<"solve it easily";
}