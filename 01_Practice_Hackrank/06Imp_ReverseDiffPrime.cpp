/*
Problem:
Given two positive integers A and B, perform the following operations:

1. Reverse the digits of integer A.
2. Reverse the digits of integer B.
3. Find the absolute difference between the two reversed numbers.
4. Determine whether the resulting difference is a prime number.

If the absolute difference is a prime number, print "Prime".
Otherwise, print "Not Prime".

Input Format:
A single line containing two space-separated positive integers A and B.

Constraints:
A, B are positive integers.

Output Format:
Print:
- "Prime" if the absolute difference of the reversed numbers is prime.
- "Not Prime" otherwise.

Sample Input 1:
12 4

Sample Output 1:
Prime

Explanation:
Reverse(12) = 21
Reverse(4) = 4
Absolute Difference = |21 - 4| = 17
Since 17 is a prime number, the output is "Prime".

Sample Input 2:
13 22

Sample Output 2:
Not Prime

Explanation:
Reverse(13) = 31
Reverse(22) = 22
Absolute Difference = |31 - 22| = 9
Since 9 is divisible by 3, it is not a prime number.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here.*/
    long long A,B;
    cin>>A>>B;
    long long reverseA=0,reverseB=0;
    long long temp,tempB;
    while(A>0 || B>0){
        if(A>0){
        temp = A%10;
        reverseA = (reverseA*10) + temp;
        A /=10;}
        
        if(B>0){
        tempB =B%10;
        reverseB = (reverseB*10) + tempB;
        B /=10;
        }   
    }
    long long absoluteD = abs(reverseA - reverseB);
    if (absoluteD <= 1) {
        cout << "Not Prime";
        return 0;
    }
    int prime = 2;
    for(long long i = 2; i * i <= absoluteD; i++){
        if(absoluteD % i == 0){
            prime +=1;
            break;
        }
    }
    if(prime == 2){
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime";
    }
    
    
}