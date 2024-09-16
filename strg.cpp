#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s = "ranjan kumar sahoo";
    cout<<"the length of string="<<s.length()<<endl;
    sort(s.begin(),s.end());
    cout<<"after the sorting of string it will be="<<s<<endl;
    string s1 = "hello world";
    int sum =0;
    for(int i=0;i<s1.length();i++)
    {
        cout<< int(s1[i])<<endl;
        sum = sum + s1[i];
    }
    cout<<"the sum of all character in a string="<<sum<<endl;
    string r = "789";
    int x = stoi(r);
    cout<<"it convert string to integer="<< x + 5 <<endl;
    int y = 745;
    cout<<"it convert integer to string="<< to_string(y) + "8"<<endl;
    return 0;
}