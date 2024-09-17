#include<iostream>
#include<string>
using namespace std;
class shop
{
    public:
    string fruit;
    string veg;
    int id;
    char r;
    int sum;
};
int main()
{
   class shop obj;
   cout<<"enter any fruit name which is favourite="<<endl;
   cin>>obj.fruit;
   cout<<"enter any vegitable which are swetable="<<endl;
   cin>>obj.veg;
   obj.id = 124;
   obj.r = 't';
   cout<<"the isd of  the studernt is="<<obj.id<<endl;
   cout<<"the favourite character is="<<obj.r<<endl;
   obj.sum = obj.id+obj.r;
   cout<<"the sum of class is="<<obj.sum<<endl;
   return 0;
}
