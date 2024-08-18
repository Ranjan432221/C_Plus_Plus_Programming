#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"enter the size of row";
    cin>>row;
    cout<<"enter the size of col";
    cin>>col;
    int arr[50][50];
    cout<<"enter row and col both:"<<row*col;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"elements of array is igiven below:"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}