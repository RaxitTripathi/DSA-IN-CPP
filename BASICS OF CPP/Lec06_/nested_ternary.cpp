#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"\nEnter second number:";
    cin>>b;
    cout<<"\nEnter third number:";
    cin>>c;

    int largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    cout << "Largest = " << largest;

    return 0;
}