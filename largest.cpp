#include<iostream>
#include<climits>
using namespace std;
void thirdLargest(int arr[],int arr_size)
{
    if(arr_size<3)
    {
       printf("invalid input");
       return;
    }
    int first = arr[0];
    for(int i=0;i<arr_size;i++)
    {
        if (arr[i]>first)
        {
           first  = arr[i];
        }
    }
    cout<<"the first largest no:"<<first<<endl;

    int second = INT_MIN;
    for(int i=0;i<arr_size;i++)
    {
        if(arr[i]>second && arr[i]<first)
        {
           second = arr[i] ;
        }
    }
    cout<<"the second largest:"<<second<<endl;

    int third = INT_MIN;
   for(int i=0;i<arr_size;i++)
   {
     if(arr[i]>third && arr[i]<second)
     {
        third = arr[i];
     }
   }
   cout<<"the third largest no:"<<third<<endl;

}
int main(){
    int arr[] = {12,13,1,10,34,16};
    int n = sizeof(arr) / sizeof(arr[0]);
    thirdLargest(arr,n);
    return 0;
}