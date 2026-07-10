#include <bits/stdc++.h>
using namespace std;

int main() {
    int number;
    cout << "Enter number: ";
    cin >> number;
    
    // 1. Start at 0, not 1
    int reverseNum = 0, lastdigit; 
    
    while (number != 0) {
        lastdigit = number % 10;
        
        // 2. Multiply the CURRENT total by 10, then add the single digit
        reverseNum = (reverseNum * 10) + lastdigit; 
        
        number /= 10;
    }
    
    cout << "Reverse of given number is: " << reverseNum << "\n";
    return 0;
}