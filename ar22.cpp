#include<iostream>
using namespace std;
int main()
{
    int ar[200][200],sum = 0;
    int row,col;
    cout<<"enter the value the row="<<endl;
    cin>>row;
    cout<<"enter the size of col="<<endl;
    cin>>col;
    cout<<"enter the row and col both"<<row*col<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>ar[i][j];
        }
    }
    cout<<"the array given below"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<ar[i][j]<<" ";
            sum+=ar[i][j];
        }
        cout<<endl;
    }
    cout<<"the sum is"<<sum;
    return 0;
}