#include<iostream>
using namespace std;
int main()
{
    float temp,f,c;
    cout<<"enter the vallue of temp in celcius:"<<endl;
    cin>>temp;
    cout<<"convert temp to farenheight"<<endl;
    f =( 9*c/5)+32;
    cout<<"farenheit is:"<<f<<endl;
    cout<<"farenheight to temp is:"<<endl;
    cout<<"enter the temp in faren height:";
    cin>>f;
     temp = (f-32)*5/9;
    cout<<"farenheight to temp in celcius: "<<temp<<endl;
    return 0;
}