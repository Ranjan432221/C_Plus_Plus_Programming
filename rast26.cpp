#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main()
{
    //string str = "ranjan";
    
   //string str(5,'r');
  //string str;
  // cout<<"enter the any string"<<endl;
   //('getline' use instead of 'cin' only in string
   //'getline' take all sentence in input but cin can not take all sentence in input
   //if u write "ranjan kumar sahoo" as a string but take 'cin' as a input then its output will give only"ranjan"
   //but if we use 'getline' as a input then it will  give full sentence "ranjan kumar sahoo" as it is)//
   //getline(cin,str);  
   // cout<<str<<endl;
  /* (string s1 = "ranjan";
   string s2 = "kumar";
   string s3 = "sahoo";
  // s1.append(s2);
   cout<<s1 + s2<<endl;
   s1 = s1+s2+s3;
   cout<<s1<<endl; )*/
  /* (string abc = "it isjkkdjvbkdjvbkjkjcb";
   abc.clear(); 
   cout<<abc;)*/
   //USE OF 'COMPARE' FUNCTION IN STRING
   /*(string s1 = "abc";
   string s2 = "xyz";
   cout<<s2.compare(s1)<<endl;)*/
   //USE OF 'EMPTY' FUNCTION IN STRING
    //s1.cear();
 /* if(s1.empty());
  cout<<"string is empty";*/
 /*if(!s1.empty())
 cout<<"it is not empty string";*/
 /*string s1 = "ranjan";
 s1.erase(3,2);
   cout<<s1<<endl;*/
  /* string s1 = "ranjan";
   cout<< s1.find("ra")<<endl;*/
  /* string s1 = "ranjan";
   s1.insert(2,"lol");
   cout<<s1<<endl;*/
  /* string s1 = "ranjan";
  // cout<<s1.size()<<endl;
  cout<<s1.length()<<endl;*/
 /* (string s1 = "ranjan";
  int sum = 0;
  for(int i=0;i<s1.length();i++)
  {
    cout<<int(s1[i])<<endl;
    sum = sum+s1[i];
  }
  cout<<"the sum of string s1="<<sum;)*/
  //USE OF 'SUBSTR' FUNCTION
 /*( string s1 = "ranjan";
  string s = s1.substr(3,2);
  cout<<s;)*/
  //CONVERT STRING TO INTEGER using 'STOI' FUNCTION
 /*(string s1 = "786";
 int x = stoi(s1);  
 cout<<x+2<<endl;)*/
 //CONVERT INTEGER TO STRING USING 'TO_STRING' FUNCTION
 /*(int x = 786;
 cout<<to_string(x) + "2"<<endl;)*/
 //SORTING A STRING
 //when we are going to sort in a string then we have to use (#include<algorithm>)
 //as a header file
   string s1 = "jhgvsuhfe hkhflee";
   sort(s1.begin(),s1.end());
   cout<<"after the sorting of string it will be="<<s1<<endl;
   
    return 0;
}