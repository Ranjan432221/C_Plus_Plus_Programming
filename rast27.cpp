#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str = "jkjllknsjuhdiu";
    //convert into upper case

   // cout << 'a' - 'A' <<endl;
   for(int i=0;i<str.size();i++)
   {
     if(str[i]>='a' && str[i]<='z')
     str[i]-=32;
   }
   cout<<"the upper case ="<<str<<endl;
   //convert to lower case
   for(int i=0;i<str.size();i++)
   {
     if(str[i]>= 'A' && str[i]<= 'Z')
     str[i]+=32;
   }
   cout<<"the lower case of string="<< str <<endl;
   return 0;
}