#include<iostream>
using namespace std;

int main() {
    int user;
    cout << "Enter a number: ";
    cin >> user;

    if(user == 1){
        cout << "Neither prime nor composite";
        return 0;
    }

    bool isPrime = true;

    for(int i = 2; i * i <= user; i++){
        if(user % i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime)
        cout << "Prime number";
    else
        cout << "Composite number";
}