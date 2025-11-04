#include <iostream> // Header file
#include <cmath> // For mathematical functions
using namespace std;

int main() {
    // Declare variable names for the two numbers
    int num1, num2;
    
    // User input
    cout << "\n";
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "\n";

    // Calculations
    // Addition
    int sum = num1 + num2;
    cout << "Sum: " << sum << "\n";

    // Multiplication
    double multiplication = num1 * num2;
    cout << "Multiplication: " << multiplication << "\n";

    // Subtraction
    int subtraction = num1 - num2;
    cout << "Subtraction: " << subtraction << "\n";

    // Division
    double division = num1 / num2;
    cout << "Division: " << division << "\n";

    // Power
    double power = pow(num1, num2);
    cout << "Power (1st number to the power of the 2nd number): " << power << "\n";

    // Square root
    double sqrt1 = sqrt(num1);
    cout << "Square root of the first number: " << sqrt1 << "\n";

    // Logarithm
    float log1 = log(num1);
    cout << "log of the first number: " << log1 << "\n";

    // Modulus
    int modulus = num1 % num2;
    cout << "Modulus (remainder of first number divided by second number): " << modulus << "\n\n";

 }