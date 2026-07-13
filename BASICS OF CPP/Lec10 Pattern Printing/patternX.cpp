#include<iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter size of pattern: ";
    cin >> size;

    for(int i = 1; i <= size; i++) {
        for(int j = 1; j <= size; j++) {
            if(i == j || i + j == size + 1) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}