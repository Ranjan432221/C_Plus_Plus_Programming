#include <iostream>
using namespace std;

// Base class for RBI with base rate of interest
class RBI {
protected:
    float baseRate;

public:
    RBI(float rate = 4.3) : baseRate(rate) {}

    float getBaseRate() const {
        return baseRate;
    }
};

// Derived classes for different banks inheriting from RBI
class SBI : public RBI {
public:
    SBI() : RBI(5.9) {}

    // Function to calculate simple interest
    float calculateInterest(float principal, float time) {
        return (principal * baseRate * time) / 100;
    }
};

class HDFC : public RBI {
public:
    HDFC() : RBI(6.7) {}

    // Function to calculate simple interest (overloaded)
    float calculateInterest(float principal, float time) {
        return (principal * baseRate * time) / 100;
    }
};

class ICICI : public RBI {
public:
    ICICI() : RBI(7.1) {}

    // Function to calculate simple interest (overloaded)
    float calculateInterest(float principal, float time) {
        return (principal * baseRate * time) / 100;
    }
};

int main() {
    float principal = 10000;  // Principal amount for investment (example)
    float time = 2;  // Time period in years (example)

    // Create objects of each bank
    SBI sbi;
    HDFC hdfc;
    ICICI icici;

    // Calculate interest from each bank
    float interestSBI = sbi.calculateInterest(principal, time);
    float interestHDFC = hdfc.calculateInterest(principal, time);
    float interestICICI = icici.calculateInterest(principal, time);

    // Output results
    std::cout << "Simple interest comparison for principal amount $" << principal << " and time period " << time << " years:\n";
    std::cout << "SBI Interest: $" << interestSBI << std::endl;
    std::cout << "HDFC Interest: $" << interestHDFC << std::endl;
    std::cout << "ICICI Interest: $" << interestICICI << std::endl;

    // Determine the best bank based on highest interest rate
    if (interestSBI > interestHDFC && interestSBI > interestICICI) {
        std::cout << "SBI offers the highest interest rate." << std::endl;
    } else if (interestHDFC > interestSBI && interestHDFC > interestICICI) {
        std::cout << "HDFC offers the highest interest rate." << std::endl;
    } else if (interestICICI > interestSBI && interestICICI > interestHDFC) {
        std::cout << "ICICI offers the highest interest rate." << std::endl;
    } else {
        std::cout << "All banks offer the same interest rate." << std::endl;
    }

    return 0;
}
