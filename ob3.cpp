#include<iostream>
#include<string>
using namespace std;
class ranjanofc
{
    public:
    int i;
    float avg;
    int sum =0;
    int count = 0;
    int n;
};
int main()
{
    class ranjanofc r;
    cout<<"enter any number which you want:";
    cin>>r.n;
    for(r.i=0;r.i<=r.n;r.i++)
    {
        r.sum+= r.i;
        r.count++;
    }
    float avg = (float)r.sum/r.count;
    cout<<"sum="<<r.sum<<endl;
    cout<<"avg="<<r.avg<<endl;
    return 0;
}