#include<iostream>
using namespace std;
int main()
{
    int num = 1234;
    int digit1 = num/1000;
    int digit2 = (num/100)%10;
    int digit3 = (num/10)%10;
    int digit4 = num%10;
    int digitsum = digit1 + digit2 + digit3 + digit4;
    int leftshiftresult = digitsum<<digit3;
    int rightshiftresult = digitsum>>digit3;
    int zerofillresult = digitsum>>digit3;
    std::cout<<"sum of digits:"<<digitsum<<std::endl;
    std::cout<<"left shift:"<<leftshiftresult<<std::endl;
    std::cout<<"right shift:"<<rightshiftresult<<std::endl;
    std::cout<<"zero fill:"<<zerofillresult<<std::endl;
    return 0;
}