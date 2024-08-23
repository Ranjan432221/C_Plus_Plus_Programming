#include<iostream>
using namespace std;
int main()
{
  int n,b,arm=0,c;
  cout<<"enter any no:";
  cin>>n;
  c=n;
  while(n!=0)
  {
    b = n%10;
    arm=(b*b*b)+arm;
    n=n/10;
  }
  if(c==arm)
  {
    cout<<"it is armstrong no";
  }
  else
  {
    cout<<"it is not arm strong";
  }
  return 0;
}