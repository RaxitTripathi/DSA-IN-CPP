/*
Problem:
Given an integer N, print a butterfly star pattern consisting of
2 × N rows.

The pattern is formed by:
- An upper half where the number of stars on both sides increases
  from 1 to N, while the spaces in the middle decrease.
- A lower half which is the mirror image of the upper half.

Input Format:
A single integer N.

Constraints:
1 <= N

Output Format:
Print the butterfly star pattern.

Sample Input:
5

Sample Output:
*        *
**      **
***    ***
****  ****
**********
**********
****  ****
***    ***
**      **
*        *

Explanation:
- The upper half consists of two right-angled triangles facing each other.
- The gap between them decreases by two spaces in each row.
- The lower half is the mirror image of the upper half.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here.*/
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        //lhs star
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        //middle space
        for(int k=1;k<=(2*n)-(2*i);k++){
            cout<<" ";
        }
        //rhs star
        for(int l=1;l<=i;l++){
            cout<<"*";
        }
        cout<<endl;
    }
     for(int i=n;i>0;i--){
        //lhs star
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        //middle space
        for(int k=1;k<=(2*n)-(2*i);k++){
            cout<<" ";
        }
        //rhs star
        for(int l=1;l<=i;l++){
            cout<<"*";
        }
        cout<<endl;
    }
}
