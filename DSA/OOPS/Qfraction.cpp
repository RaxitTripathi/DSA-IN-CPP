
#include <iostream>
using namespace std;

class Calculator {

public:

    // Addition
    int add(int a, int b) {
        return a + b;
    }

    // Multiplication
    int multiply(int a, int b) {
        return a * b;
    }

    // Find GCD Greatest Common Divisor
    int findGCD(int a, int b) {

        while (b != 0) {
            int rem = a % b;
            a = b;
            b = rem;
        }

        return a;
    }

    // Simplify a fraction
    void simplify(int numerator, int denominator) {

        if (denominator == 0) {
            cout << "Invalid denominator!" << endl;
            return;
        }

        int gcd = findGCD(abs(numerator), abs(denominator));

        numerator = numerator / gcd;
        denominator = denominator / gcd;

        // Keep denominator positive
        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }

        cout << "Simplified Fraction: "
             << numerator << "/" << denominator << endl;
    }

};

int main() {

    Calculator obj;

    cout << "Addition: " << obj.add(10, 20) << endl;

    cout << "Multiplication: "
         << obj.multiply(10, 20) << endl;

    obj.simplify(12, 18);

    return 0;
}
