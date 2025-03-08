#include <iostream>
#include <cmath>

double calculateSIP(double P, double annualRate, int months) {
    double r = annualRate / 12 / 100; // Monthly interest rate
    double M = P * (pow(1 + r, months) - 1) / r * (1 + r);
    return M;
}

int main() {
    double monthlyInvestment, annualRate;
    int months;

    std::cout << "Enter the monthly investment amount: ";
    std::cin >> monthlyInvestment;

    std::cout << "Enter the annual interest rate (in %): ";
    std::cin >> annualRate;

    std::cout << "Enter the number of months: ";
    std::cin >> months;

    double maturityAmount = calculateSIP(monthlyInvestment, annualRate, months);

    std::cout << "The maturity amount after " << months << " months is: " << maturityAmount << std::endl;

    return 0;
}
