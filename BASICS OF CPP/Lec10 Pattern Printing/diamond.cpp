/* 
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
    * 
 */



#include<iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter size of pattern: ";
    cin >> size;

    for (int i = 1; i <= 2 * size - 1; i++) {

        int spaces, stars;

        // Upper Half
        if (i <= size) {
            spaces = size - i;
            stars = 2 * i - 1;
        }
        // Lower Half
        else {
            spaces = i - size;
            stars = 2 * (2 * size - i) - 1;
        }

        // Print Spaces
        for (int j = 1; j <= spaces; j++) {
            cout << "  ";
        }

        // Print Stars
        for (int j = 1; j <= stars; j++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}