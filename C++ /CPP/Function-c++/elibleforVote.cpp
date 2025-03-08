#include <iostream>

// Function to check if the person is eligible to vote
bool isEligibleToVote(int age) {
    return age >= 18;
}

int main() {
    int age;
    
    std::cout << "Enter your age: ";
    std::cin >> age;
    
    if (isEligibleToVote(age)) {
        std::cout << "You are eligible to vote." << std::endl;
    } else {
        std::cout << "You are not eligible to vote." << std::endl;
    }
    
    return 0;
}
