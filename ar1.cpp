#include<iostream>
using namespace std;
int main()
{    
   int n;
   int sum;
   cout<<"enter the array size";
   cin>>n;//[5];
   cout<<"enter the "<<n<<"no of array";
   int a[n];
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
    sum = sum+a[i];
   }
   cout<<"sum is:"<<sum;
//    cout<<"it is the proper array in given below"<<endl;
//     for(int i=0;i<n;i++)
//     {   
//         cout<<a[i]<<" ";
//     }
//     cout<<"the susm is given below"<<endl;
//     for(int i=0;i<n;i++)
//     {
//         sum = sum+a[i];
//         cout<<" "<<a[i];
    
    return 0;
}