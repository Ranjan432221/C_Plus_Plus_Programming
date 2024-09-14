
#include<iostream>
using namespace std;
int main()
{
    int a[200][200],b[200][200];
    int c[200][200];
    int n,i,j;
     cout<<"enter any number which up to print";
     cin>>n;
     for(i=0;i<=n;i++)
     {
        for(j=0;j<=n;j++)
        {
            cin>>a[i][j];
        }
     }
     cout<<"enter the second array:"<<endl;
     for(i=0;i<n;i++)
     {
        for(j=0;j<n;j++)
        {
            cin>>b[i][j];
        }
     }
     cout<<"enter the third array:"<<endl;
     for(i=0;i<n;i++)
     {
        for(j=0;j<n;j++)
        {
            c[i][j] = a[i][j]+b[i][j];
            cout<<c[i][j]<<" ";  
        }
     }
     return 0;
}
