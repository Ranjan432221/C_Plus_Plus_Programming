#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"entrer the size of array";
    cin>>n;
    int num[n];
    cout<<"enter the n no of element"<<n<<endl;
    for(int i=0;i<=n;i++)
    {
        cin>>num[i];
    }
    cout<<"calculate the array num"<<endl;
    for(int i=0;i<=n;i++)
    {
        cout<<" "<<num[i];
    }
    int ce=0,co=0,se=0,so=0;
    double ae,ao;
    for(int i=0;i<=n;i++)
    {
        if(num[i]%2==0)
        {
            ce++;
            se+=num[i];
        }
        else
        {
            co++;
            so+=num[i];
        }
    }
    ae = (double)se/ce;
    ao = (double)so/co;
    cout<<"the avg of even no is="<<ae<<endl;
    cout<<"the avg of odd no is="<<ao;
    return 0;
}