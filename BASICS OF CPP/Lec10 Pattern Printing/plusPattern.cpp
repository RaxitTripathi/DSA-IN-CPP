#include<iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter size: ";
    cin >> size;
    if(size % 2 == 0) {
    cout << "Please enter an odd number.";
    return 0;
    }

    int mid = size / 2 + 1;

    for(int i = 1; i <= size; i++) {
        for(int j = 1; j <= size; j++) {
            if(i == mid || j == mid)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}