 
#include "calculator.h"
#include <iostream>
using namespace std;

int main() {
    cout << "Addition: " << add(5, 3) << endl;
    cout << "Subtraction: " << subtract(5, 3) << endl;
    cout << "Multiplication: " << multiply(5, 3) << endl;
    cout << "Division: " << divide(5, 3) << endl;
    cout << "Factorial: " << factorial(5) << endl;
    cout << "GCD: " << gcd(48, 18) << endl;
    cout << "LCM: " << lcm(4, 6) << endl;
    cout << "Random number (1-10): " << randomInRange(1, 10) << endl;
    return 0;
}
