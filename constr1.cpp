#include<iostream>
#include<string.h>
using namespace std;
class ranjan{
    int n;
    public:
    int i,j;
    void input_data()
    {
        for(i =0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
               if((i+j)>= 5)
               {
                cout<<"   "<<i;
               }
               else
               {
                cout<<"  ";
               }
            }
            cout<<"\n";
        }
        
    }
};
int main()
{
    ranjan s;
    s.input_data();
    return 0;
}