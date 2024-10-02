/*default arguments are those value which are used by the function if we dont input our value it is
recomended to write dafault value*/
#include <iostream>
using namespace std;
float moneyReceived(int currentMoney, float factor = 1.04)
{
    return currentMoney * factor;
}
int main()
{
    int money = 100000;
    cout << "if you have" << money << "rs in your bank account,you will receive" << moneyReceived(money) << "rs after 1 year" << endl;
    cout<<"for vip : if you have "<<money<<"rs in your bank account ,you will receive"<<moneyReceived(money,1.1)<<"rs after 1year";
}