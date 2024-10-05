#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s1 = "676755";
    sort(s1.begin(),s1.end(),greater<int>());
    cout<<"the greater number ="<<s1<<endl;
    return 0;
}
