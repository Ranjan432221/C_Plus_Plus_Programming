#include <iostream>
#include <stdexcept> // for std::runtime_error

class DivisionException {
public:
    DivisionException(const std::string& message) : msg(message) {}

    const std::string& what() const {
        return msg;
    }

private:
    std::string msg;
};

class Divider {
public:
    Divider(int num, int den) : numerator(num), denominator(den) {}

    int divide() {
        if (denominator % 2 != 0 && denominator % 5 == 0 && numerator % denominator == 0) {
            throw DivisionException("Division operation not supported: Denominator is odd, divisible by 5, and numerator is divisible by denominator.");
        }
        return numerator / denominator;
    }

private:
    int numerator;
    int denominator;
};

int main() {
    int num, den;
    std::cout << "Enter numerator: ";
    std::cin >> num;
    std::cout << "Enter denominator: ";
    std::cin >> den;

    try {
        Divider divider(num, den);
        int result = divider.divide();
        std::cout << "Result of division: " << result << std::endl;
    } catch (const DivisionException& ex) {
        std::cerr << "Exception: " << ex.what() << std::endl;
    } catch (const std::exception& ex) {
        std::cerr << "Standard exception: " << ex.what() << std::endl;
    } catch (...) {
        std::cerr << "Unknown exception occurred." << std::endl;
    }

    return 0;
}
