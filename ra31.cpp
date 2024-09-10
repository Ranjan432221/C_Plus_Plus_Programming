#include<iostream>
using namespace std;
enum rot
{
    lunch , breakfast, noon,
};
int main()
{
    enum rot ranjan;
    ranjan = breakfast;
    cout<<"the value of ranjan is:"<<ranjan;
    return 0;
}