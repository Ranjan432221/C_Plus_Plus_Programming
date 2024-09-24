 #include <iostream>
using namespace std;
int main() {

 int num1 = 5;
 int num2 = 3;
 int cin = 1;
 int s1 = num1 ^ num2;
 int c1 = num1 & num2;
 int sum = s1 ^ cin;
 int c2 = s1 & cin;
 int carry = c1 | c2;
 std::cout << "Full Adder Result: Sum = " << sum << ", Carry = " << carry << std::endl;
 return 0;
}