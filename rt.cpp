#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int n,temp;
    cout<<"enter the size of array";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
   {
     cin>>a[i];
   }
   // cout<<"the proper array is defined as="<<endl;
    //for(i=0;i<n;i++)
    //{
    //    cout<<" "<<a[i];
   // }
    //cout<<"\n";
   // cout<<"the sorting for program"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
             temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout<<"the sorting array after swapping is ="<<endl;
    for(i=0;i<n;i++);
    cout<<a[i]<<" ";
    return 0;
}