#include<iostream>
using namespace std;
int main()
{
    int j,n;
    cout<<"enter the size of array";
    cin>>n;
    cout<<"enter the "<<n<<"no of element in array:"<<endl;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"the proper arrayy is given below"<<endl;
      for(int i=0;i<n;i++)
      {
        cout<<" "<<a[i];
      }
      cout<<"\n";
      cout<<"the sorting array in below"<<endl;
        for(int i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            cout<<" "<<endl;
        }   
    }
    for(int i=0;i<n;i++)
    {
        cout<<" "<<a[i];
    }
    return 0;
}