#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10, c = 15;

    // ==========================================================
    // Logical AND (&&)
    // We can write both "and" and "&&" in C++.
    // Example:
    // (a > 10 && b < 20)
    // (a > 10 and b < 20)
    // Both are exactly the same.
    //
   /*  // Short-Circuit Rule:
    // C++ checks conditions from LEFT to RIGHT.
    // If the FIRST condition becomes FALSE,
    // it immediately stops checking the remaining conditions. */
    // ==========================================================

    if (a > 10 && b < 20 && c > 10) {
        cout << "AND Condition is True\n";
    } else {
        cout << "AND Condition is False\n";
    }

    cout << endl;

    // ==========================================================
    // Logical OR (||)
    // We can write both "or" and "||" in C++.
    // Example:
    // (a > 10 || b < 20)
    // (a > 10 or b < 20)
    // Both are exactly the same.
    //
    // Short-Circuit Rule:
    // C++ checks conditions from LEFT to RIGHT.
    // If the FIRST condition becomes TRUE,
    // it immediately stops checking the remaining conditions.
    // ==========================================================

    if (a > 10 || b < 20 || c > 20) {
        cout << "OR Condition is True\n";
    } else {
        cout << "OR Condition is False\n";
    }

    return 0;
}