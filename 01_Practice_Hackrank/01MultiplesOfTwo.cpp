/*
Problem:
Given a positive integer N, print all even numbers from 1 to N (inclusive),
with each even number printed on a new line.

Input Format:
A single integer N.

Constraints:
1 <= N

Output Format:
Print each even number from 1 to N on a separate line.

Sample Input:
10

Sample Output:
2
4
6
8
10

Explanation:
The even numbers between 1 and 10 are 2, 4, 6, 8, and 10.
*/



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here.*/ 
    int N;
    cin>>N;
    for(int i=1;i<=N;i++){
        if(i%2==0){
            cout<<i<<endl;
        }
    }  
    return 0;
}
