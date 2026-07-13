/*
Problem:
Given an integer N, write a program to print a hollow right-angled triangle
of height and base N using the '*' character and spaces.

Carefully observe the sample input and output to deduce the exact pattern
and formatting required.

Input Format:
A single integer N representing the size of the triangle.

Constraints:
1 <= N

Output Format:
Print N lines representing the hollow right-angled triangle.

Sample Input:
5

Sample Output:
*
**
* *
*  *
*****

Explanation:
- The first row contains a single '*'.
- The left boundary, the diagonal, and the last row are made of '*'.
- All other positions inside the triangle are filled with spaces.
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
        for(int j=1;j<=i;j++){
            if(j==1 || j==i || i==N ){
                cout<<"*";
            }
            else cout<<" ";
            
        }
        cout<<endl;
    }
}
