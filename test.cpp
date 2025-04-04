 
#include <iostream>
#include <vector>
#include "calculator.h"

using namespace ScientificCalculator;
using namespace std;
void printResult(const CalculatorResult& result) {
    if (result.error == ErrorCode::SUCCESS) {
        cout << "Result: " << result.value << endl;
    } else {
        cout << "Error [" << static_cast<int>(result.error) << "]: " 
                  << result.message << endl;
    }
}

void testBasicOperations() {
    cout << "\n=== BASIC OPERATIONS ===\n";
    cout << "5 + 3 = " << add(5, 3) << endl;
    cout << "5.2 + 3.8 = " << add(5.2, 3.8) << endl;
    cout << "10 - 4 = " << subtract(10, 4) << endl;
    cout << "6 * 7 = " << multiply(6, 7) << endl;
    
    auto divResult = safeDivide(10, 0);
    cout << "10 / 0 = ";
    printResult(divResult);
}

void testAdvancedMath() {
    cout << "\n=== ADVANCED MATH ===\n";
    cout << "5! = " << factorial(5) << endl;
    cout << "2^8 = " << power(2, 8) << endl;
    cout << "√25 = " << squareRoot(25) << endl;
    cout << "³√27 = " << nthRoot(27, 3) << endl;
    
    auto sqrtResult = safeSquareRoot(-4);
    cout << "√(-4) = ";
    printResult(sqrtResult);
}

void testTrigonometry() {
    cout << "\n=== TRIGONOMETRY ===\n";
    double angle = 45.0;
    double radians = degreesToRadians(angle);
    
    cout << angle << "° in radians: " << radians << endl;
    cout << "sin(" << angle << "°) = " << sine(radians) << endl;
    cout << "cos(" << angle << "°) = " << cosine(radians) << endl;
    cout << "tan(" << angle << "°) = " << tangent(radians) << endl;
}

void testStatistics() {
    cout << "\n=== STATISTICS ===\n";
    vector<double> nums = {1.5, 2.5, 3.5, 4.5, 5.5};
    
    cout << "Mean: " << mean(nums) << endl;
    cout << "Median: " << median(nums) << endl;
    cout << "Std Dev: " << standardDeviation(nums) << endl;
}

void testFinancial() {
    cout << "\n=== FINANCIAL ===\n";
    double principal = 1000;
    double rate = 0.05;
    int years = 10;
    
    cout << "Compound interest on $" << principal 
              << " at " << rate*100 << "% for " 
              << years << " years: $" 
              << compoundInterest(principal, rate, years) << endl;
}

void testExpressionEvaluation() {
    cout << "\n=== EXPRESSION EVALUATION ===\n";
    string expr = "3 + 4 * (2 - 1) / 5";
    cout << expr << " = " << evaluateExpression(expr) << endl;
}

void testRandomNumbers() {
    cout << "\n=== RANDOM NUMBERS ===\n";
    cout << "Random between 1-100: " << randomInRange(1, 100) << endl;
    cout << "Random probability: " << randomProbability() << endl;
}

void testPrimeOperations() {
    cout << "\n=== PRIME OPERATIONS ===\n";
    int num = 28;
    cout << num << " is " << (isPrime(num) ? "prime" : "not prime") << endl;
    
    auto factors = primeFactors(num);
    cout << "Prime factors: ";
    for (int f : factors) {
        cout << f << " ";
    }
    cout << endl;
}

int main() {
    cout << "=== SCIENTIFIC CALCULATOR TEST ===\n";
    
    testBasicOperations();
    testAdvancedMath();
    testTrigonometry();
    testStatistics();
    testFinancial();
    testExpressionEvaluation();
    testRandomNumbers();
    testPrimeOperations();
    
    cout << "\n=== TEST COMPLETE ===\n";
    return 0;
}