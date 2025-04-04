#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <vector>
#include <string>
#include <utility>
using namespace std;
namespace ScientificCalculator {

    // Basic Arithmetic
    int add(int a, int b);
    double add(double a, double b);
    int subtract(int a, int b);
    double subtract(double a, double b);
    int multiply(int a, int b);
    double multiply(double a, double b);
    double divide(double a, double b);
    
    // Advanced Mathematical Operations
    long long factorial(int n);
    double power(double base, double exponent);
    double squareRoot(double x);
    double nthRoot(double x, int n);
    double logarithm(double x, double base = 10.0);
    double naturalLog(double x);
    double sine(double x);  // x in radians
    double cosine(double x); // x in radians
    double tangent(double x); // x in radians
    
    // Number Theory
    int gcd(int a, int b);
    int lcm(int a, int b);
    bool isPrime(int n);
    vector<int> primeFactors(int n);
    
    // Random Number Generation
    int randomInRange(int min, int max);
    double randomProbability(); // Returns value between 0.0 and 1.0
    
    // Statistical Functions
    double mean(const vector<double>& numbers);
    double median(vector<double> numbers);
    double standardDeviation(const vector<double>& numbers);
    
    // Matrix Operations (Basic)
   vector<vector<double>> matrixMultiply(const vector<vector<double>>& a, 
                                                   const vector<vector<double>>& b);
    
    // Financial Calculations
    double compoundInterest(double principal, double rate, int time);
    double presentValue(double futureValue, double rate, int time);
    
    // Expression Evaluation
    double evaluateExpression(const string& expression);
    
    // Unit Conversion
    double degreesToRadians(double degrees);
    double radiansToDegrees(double radians);
    
    // Constants
    static constexpr double PI = 3.14159265358979323846;
    static constexpr double E = 2.71828182845904523536;
    
    // Error Handling
    enum class ErrorCode {
        SUCCESS,
        DIVISION_BY_ZERO,
        NEGATIVE_SQRT,
        FACTORIAL_NEGATIVE,
        INVALID_INPUT
    };
    
    struct CalculatorResult {
        double value;
        ErrorCode error;
        string message;
    };
    
    CalculatorResult safeDivide(double a,double b);
    CalculatorResult safeSquareRoot(double x);
    CalculatorResult safeFactorial(int n);
}

#endif
