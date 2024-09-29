#include<iostream>
using namespace std;
class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
    void initcounter(void)
    {
        counter=0;
    }
    void setprice(void);
    void displayPrice(void);
};
 void shop:: setprice(void)
 {
    cout<<"enter id of your item no"<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"enter price of your item"<<endl;
    cin>>itemPrice[counter];
    counter++;
 }
 void shop::displayPrice(void)
 {
    for(int i=0;i<counter;i++)
    {
        cout<<"the price item with id"<<itemId[i]<<" -is"<<itemPrice[i]<<endl;
    }
 }
int main()
{
  shop dukaan;
  dukaan.initcounter();
  dukaan.setprice();
  dukaan.setprice();
  dukaan.setprice();
  dukaan.displayPrice();
  return 0;

}