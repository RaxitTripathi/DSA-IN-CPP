/*
Problem:
Write a program to continuously read integers from the user and calculate
their sum. The input process should stop when the user enters 0.

The value 0 is only used as a sentinel to terminate the input and should
not be included in the sum.

Input Format:
A sequence of integers, one at a time. The sequence ends when 0 is entered.

Constraints:
-10^9 <= integer <= 10^9

Output Format:
Print the sum of all entered integers (excluding 0).

Sample Input:
5
10
-3
8
0

Sample Output:
20

Explanation:
The numbers entered before 0 are 5, 10, -3, and 8.
Their sum is 20. The input stops when 0 is entered.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here.*/ 
    int sum=0; 
    while(true){
        int user;
        cin>>user;
        
        if(user==0){
            cout<<sum;
            break;
        }
        else{
            sum += user;
        }
        
    } 
}
