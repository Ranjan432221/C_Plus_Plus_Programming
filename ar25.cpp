#include<iostream>
using namespace std;
int main()
{
    int a[50][50];
    int row,col;
    cout<<"enter row size"<<endl;
    cin>>row;
    cout<<"enter  col size"<<endl;
    cin>>col;
    cout<<"the array is give below"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"properly print in array is below"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"the transpose of the array is given below"<<endl;
  for(int i=0;i<col;i++)
    {
          for(int j=0;j<row;j++)
        {
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}