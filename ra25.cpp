#include<iostream>
using namespace std;
//function overloading
int sum(int a, int b)
{
    cout<<"using function with 2 arguments"<<endl;
    return a+b;
}
int sum(int a,int b, int c)
{
    cout<<"using function with three arguments"<<endl;
    return a+b+c;
}
//calculate the volume of cylinder
int volume(int r,int h)
{
    return (3.14*r*r*h);
}
//calculate the volume of cube
int volume(int a)
{
    return(a*a*a);
}
//calculate the volume of rectangle
int volume(int l,int b,int h)
{
    return (l*b*h);
}
int main()
{ 
    int e,f,g,k,l,d;
    cout<<"enter the value of e,f"<<endl;
    cin>>e>>f;
     d = sum(e,f);
     cout<<"the sum of 1st"<<d<<endl;
     cout<<"enter the value of e f and g="<<endl;
     cin>>g>>k>>l;
     int t = sum(g,k,l);
     cout<<"the sum of 2nd is="<<t<<endl;
     int r,h;
   cout<<"enter the value ofradius and height"<<endl;
   cin>>r>>h;
   int v = volume(r,h);
   cout<<"the volume ofg cylinder="<<v<<endl;
   int a;
   cout<<"enter the value of a"<<endl;
   cin>>a;
   int cube = volume(a);
   cout<<"the volume of cube is="<<cube<<endl;
   int ln,b,ht;
   cout<<"enter the valuee of ln,b,ht"<<endl;
   cin>>ln>>b>>ht;
   int rectangle  = volume(ln,b,ht);
   cout<<"the volume of rectangle ="<<rectangle<<endl;
 return 0;
}