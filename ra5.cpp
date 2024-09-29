#include<iostream>
using namespace std;
//int c = 45;
int main()
{
    //**********build in data type;
    //int a, b;
    //int c;
    //long double w = 13.4l;
    //float g = 34.4f;
   // cout<<"enter the value of a is:"<<endl;
    //cin>>a;
    //cout<<"enter the value of b is:"<<endl;
    //cin>>b;
    //c = a + b;
    //cout<<"the sum is:"<<c<<endl;
    //*********float ,long double,double,LITERALS************
   // cout<<"the global variable is:"<<::c<<endl;
    //cout<<"the value of g is:"<<g<<endl;
    //cout<<"the value of w is:"<<w<<endl;
    //cout<<"the size of sizeof:"<<sizeof(34.4)<<endl;
    //cout<<"the size of sizeof:"<<sizeof(34.4f)<<endl;
    //cout<<"the size of sizeof:"<<sizeof(34.4f)<<endl;
    //cout<<"the size of sizeof:"<<sizeof(34.4f)<<endl;
    //cout<<"the size of sizeof:"<<sizeof(13.4l)<<endl;
    //cout<<"the size of sizeof:"<<sizeof(13.4l)<<endl;
    //************referance variable**************
    //Rohan das----->Monty------>Rohu----->Dangerous coder
    //float x = 455;
    //float &y = x;
    //cout<<x<<endl;
    //cout<<y<<endl;



    ///********typecasting********
    int a = 45;
    float b = 45.46;
    cout<<"the value of a is:"<<(float)a;
    cout<<"the value of a is:"<<float(a);
    cout<<"the value of b is"<<(int)b<<endl;
    cout<<"the value of b is "<<int(b)<<endl;
    //int c = int(b);
    cout<<"the expressiopn is"<<a+b;
    cout<<"the expression is "<<a+int(b)<<endl;
    cout<<"the expression is"<<a+(int)b;
    return 0;
}