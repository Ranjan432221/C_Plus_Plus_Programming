 #include <iostream>
int main() {
 int num;
 std::cout<<"enter any four digit no:";
 std::cin>>num;
 int digit1 = num / 1000;
 int digit2 = (num / 100) % 10;
 int digit3 = (num / 10) % 10;
 int digit4 = num % 10;
 double evenAverage = ((digit1 % 2 == 0 && digit1 % 4 != 0) ? digit1 : 0) +
 ((digit2 % 2 == 0 && digit2 % 4 != 0) ? digit2 : 0) +
 ((digit3 % 2 == 0 && digit3 % 4 != 0) ? digit3 : 0) +
 ((digit4 % 2 == 0 && digit4 % 4 != 0) ? digit4 : 0);

 double oddAverage = ((digit1 % 2 != 0 && digit1 % 3 != 0) ? digit1 : 0) +
 ((digit2 % 2 != 0 && digit2 % 3 != 0) ? digit2 : 0) +
 ((digit3 % 2 != 0 && digit3 % 3 != 0) ? digit3 : 0) +
 ((digit4 % 2 != 0 && digit4 % 3 != 0) ? digit4 : 0);

 int evenCount = ((digit1 % 2 == 0 && digit1 % 4 != 0) ? 1 : 0) +
 ((digit2 % 2 == 0 && digit2 % 4 != 0) ? 1 : 0) +
 ((digit3 % 2 == 0 && digit3 % 4 != 0) ? 1 : 0) +
 ((digit4 % 2 == 0 && digit4 % 4 != 0) ? 1 : 0);

 int oddCount = ((digit1 % 2 != 0 && digit1 % 3 != 0) ? 1 : 0) +
 ((digit2 % 2 != 0 && digit2 % 3 != 0) ? 1 : 0) +
 ((digit3 % 2 != 0 && digit3 % 3 != 0) ? 1 : 0) +
 ((digit4 % 2 != 0 && digit4 % 3 != 0) ? 1 : 0);
 
 evenCount = (evenCount == 0) ? 1 : evenCount;
 oddCount = (oddCount == 0) ? 1 : oddCount;
 evenAverage /= evenCount;
 oddAverage /= oddCount;
 std::cout<<evenCount<<std::endl;
 std::cout<<oddCount<<std::endl;
 double difference = evenAverage - oddAverage;
 std::cout << "The difference between the average of even digits (except those divisible by 4) "
 << "and the average of odd digits (except those divisible by 3) in " << num << " is: " << difference
<< std::endl;
 return 0;
}