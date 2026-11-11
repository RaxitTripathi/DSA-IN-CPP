
#include <iostream>
#include <string>
using namespace std;

class Student {

public:
    string name;
    int age;

    Student(string name, int age) {

        // this-> refers to current object's attributes
        this->name = name;
        this->age = age;

    }

    void display() {

        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;

    }

}; 

int main() {

    Student s1("Raxit", 21);
    Student s2("Gopi", 18);

    s1.display();
    s2.display();

    return 0;
}

/* 
this is an implicit pointer.

It is available inside non-static member functions.

It cannot be used inside static member functions.

It helps resolve naming conflicts between attributes and parameters.
 */