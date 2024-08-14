#include<iostream>
using namespace std;
class matrix{
    private:
    int mat[2][3];
    
    public:
    //constructor to initialize the matrix
    matrix(){
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<3;j++)
            {
                
                mat[i][j] = 0;
            }
            
        }
    }
    void input()

    {
         cout<<"entre the 2*3 matrix"<<endl;
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<3;j++)
            {
                 cout << "Element [" << i << "][" << j << "]: ";
                cin>>mat[i][j];
                
            }
        }
    }
    void display()
    {
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    friend matrix multiply(const matrix& m1,const matrix& m2);
};
matrix multiply(const matrix& m1,const matrix& m2){
    matrix result;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            result.mat[i][j]=0;
            for(int k=0;k<3;k++)
          {
              result.mat[i][j] +=m1.mat[i][k]*m2.mat[k][j];
          }
        }
    }
    return result;
}
int main()
{
    matrix mat1,mat2,result;
    cout<<"matrix 1:"<<endl;
    mat1.input();
    
      cout<<"matrix 2:"<<endl;
    mat2.input();
    
    result = multiply(mat1,mat2);
    cout<<"result="<<endl;
    result.display();
    
}
