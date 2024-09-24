 #include <iostream>
using namespace std;
int main() {
 int num1 = 5;
 int num2 = 3;
 int sum = num1 ^ num2;
 int carry = num1 & num2;
 cout << "Half Adder Result: Sum = " << sum << ", Carry = " << carry << endl;
 return 0;
}