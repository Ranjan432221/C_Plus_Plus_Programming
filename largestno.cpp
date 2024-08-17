#include <iostream>
#include<climits>
using namespace std;
void print2ndlargest(int arr[],int arr_size)
{
    if(arr_size<3)
    {
    cout<<"invalid input"<<endl;
    return;
    }
    int first = arr[0];
    for(int i=1;i<arr_size;i++)
    {
        if(arr[i]>first)
        {
            first = arr[i];
            
        }
       
    }
     cout<<"the 1st largest no ="<<first<<endl;
    int second = INT_MIN;
    for(int i=0;i<arr_size;i++)
    {
        if(arr[i]>second && arr[i]<first)
        {
            second = arr[i];
           
        }
        
    }
     cout<<"the 2nd largest="<<second<<endl;
     int third = INT_MIN;
     for(int i=0;i<arr_size;i++)
     {
         if(arr[i]>third && arr[i]<second)
         {
             third = arr[i];
         }
     }
     cout<<"the third largest="<<third;
}

int main()
{
    int arr[] = {14,15,78,25,32,20};
    int n = sizeof arr/sizeof(arr[0]);
    print2ndlargest(arr,n);
    return 0;
}