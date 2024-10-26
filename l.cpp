#include<iostream>
using namespace std;
void printarray(int arr[],int n)
{
    int i;
    for(i=0;i<=n;i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<"\n";
}
void insertionsort(int arr[],int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key = arr[i];
        j = i-1;
        while(j>=0&&arr[j]>key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}
int main()
{
    int arr[] = {23,2,4,34,6,12,24};
    int n = 6;
    printarray(arr,n);
    insertionsort(arr,n);
    printarray(arr,n);
    return 0;
}