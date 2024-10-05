#include <iostream>
using namespace std;
 class employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "enter the id" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the id of this employee is" << id << "and this is employee number" << count << endl;
    }
    static void getcount(void)
    {
        // cout<<id; get throw an error
        cout << "the value of count is" << count << endl;
    }
};
// count is the static datamember of class employee
int employee::count; // default value is 0
int main()
{
    employee ranjan, chandan, lovish;
    // ranjan.id = 1;
    // ranjan.count = 1;cannot do this as id and count is private
    ranjan.setData();
    ranjan.getdata();
    employee::getcount(); // it can be call by an object or by a class name also
    chandan.setData();
    chandan.getdata();
    employee::getcount();
    lovish.setData();
    lovish.getdata();
    employee::getcount();
    return 0;
}
