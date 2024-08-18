#include<iostream>
using  namespace std;
int main()
{
     int a[50][50],b[50][60],c[50][50],n;
     int row,col;
     cout<<"enter the size of row is=";
     cin>>row;
     cout<<"enter the size of col is=";
     cin>>col;
     cout<<"it is the 1st array"<<endl;
     for(int i=0;i<row;i++)
     {
        for(int j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
     }
     cout<<"print the 1st array"<<endl;
     for(int i=0;i<row;i++)
     {
        for(int j=0;j<col;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
     }
     cout<<"enter the second array"<<endl;
     for(int i=0;i<row;i++)
     {
        for(int j=0;j<col;j++)
        {
            cin>>b[i][j];
        }
     }
     cout<<"print the 2nd array"<<endl;
     for(int i=0;i<row;i++)
     {
        for(int j=0;j<col;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
     }
     cout<<"third array is"<<endl;
     for(int i=0;i<row;i++)
     {
        for(int j=0;j<col;j++)
        {
           c[i][j]=a[i][j]+b[i][j];
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
     }
     return 0;
}