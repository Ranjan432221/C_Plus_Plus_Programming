#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

float even_sum = 0, odd_sum = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0 && i % 4 != 0)
        { // Add even numbers except those divisible by 4
            even_sum += i;
        }
        else if (i % 2 != 0 && i % 5 != 0)
        { // Add odd numbers except those divisible by 5
            odd_sum += i;
        }
    }

      float even_factorial = 1, odd_factorial = 1;

    // Calculate factorial of even_sum
    for (int i = 2; i <= even_sum; i++)
    {
        even_factorial *= i;
    }

    // Calculate factorial of odd_sum
    for (int i = 2; i <= odd_sum; i++)
    {
        odd_factorial *= i;
    }

     float factorial_difference = even_factorial - odd_factorial;

    cout << "Factorial difference between sum of all even numbers (except those divisible by 4) and sum of all odd numbers (except those divisible by 5) up to " << n << " is: " << factorial_difference << endl;

    return 0;
}
