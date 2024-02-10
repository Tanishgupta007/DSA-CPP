#include <iostream>

int closestNumber(int n, int m) {
    int quotient = n / m;
    
    // Two possible closest numbers
    int closest1 = m * quotient;
    int closest2 = m * (quotient + 1);

    // Determine which one is closer to n without using ternary operator
    if (abs(n - closest1) < abs(n - closest2)) {
        return closest1;
    } else {
        return closest2;
    }
}

int main() {
    int n, m;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    std::cout << "Enter the value of m: ";
    std::cin >> m;

    int result = closestNumber(n, m);
    std::cout << "The closest number to " << n << " that is divisible by " << m << " is: " << result << std::endl;

    return 0;
}
