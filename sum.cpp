#include <iostream>

// Function to calculate sum of even and odd digits
int sumOfDigits(int num, bool even) {
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        if ((even && digit % 2 == 0) || (!even && digit % 2 != 0)) {
            sum += digit;
        }
        num /= 10;
    }
    return sum;
}

int main() {
    int numbers[10] = {12, 345, 678, 91, 234, 567, 890, 345, 678, 901};
    int sumEven = 0, sumOdd = 0;

    // Calculate sum of all even and odd numbers
    for (int i = 0; i < 10; ++i) {
        if (numbers[i] % 2 == 0) {
            sumEven += numbers[i];
        } else {
            sumOdd += numbers[i];
        }
    }

    // Calculate sum of even and odd digits
    int sumEvenDigits = sumOfDigits(sumEven, true);
    int sumOddDigits = sumOfDigits(sumOdd, false);

    // Calculate the product of corresponding even and odd digits sums
    int result = sumEvenDigits * sumOddDigits;

    // Output the result
    std::cout << "Sum of product of corresponding even and odd digits: " << result << std::endl;

    return 0;
}
