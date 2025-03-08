#include <iostream>

// Function to calculate simple interest
double calculateSimpleInterest(double principal, double rate, double time) {
    return (principal * rate * time) / 100;
}

int main() {
    double principal, rate, time;
    
    std::cout << "Enter the principal amount: ";
    std::cin >> principal;
    
    std::cout << "Enter the annual interest rate (in %): ";
    std::cin >> rate;
    
    std::cout << "Enter the time (in years): ";
    std::cin >> time;
    
    double interest = calculateSimpleInterest(principal, rate, time);
    
    std::cout << "The simple interest is: " << interest << std::endl;
    
    return 0;
}
