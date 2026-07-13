/*
Problem:
Given a positive integer N, print a square pattern of size N × N using
consecutive odd numbers.

In each row:
- Print the first i odd numbers in increasing order.
- After that, repeat the last printed odd number until the row contains N values.

Input Format:
A single integer N.

Constraints:
1 <= N

Output Format:
Print the required N × N pattern.

Sample Input:
6

Sample Output:
111111
133333
135555
135777
135799
1357911

Explanation:
- Row 1: Print the first odd number (1), then repeat it.
- Row 2: Print 1, 3, then repeat 3.
- Row 3: Print 1, 3, 5, then repeat 5.
- Continue the pattern until the Nth row.
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
        int odd=1;
        for(int j=1;j<=N;j++){
            if(j <= i){
                cout<<odd;
                odd += 2;
            }
            else cout<<odd -2;
        }
        cout<<endl;
    }       
}
