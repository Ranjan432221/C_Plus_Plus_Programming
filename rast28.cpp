#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s1 = "ranjankumar sahoo";
    transform(s1.begin(),s1.end(),s1.begin(),::toupper);
   //sort(s1.begin(),s1.end());
    cout<<"the uppercase of string s1="<< s1 <<endl;
    return 0;
}