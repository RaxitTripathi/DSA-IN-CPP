
/*
    TOPIC: Dynamic Memory Allocation in C++

    new    -> Allocates memory dynamically (Heap).
    delete -> Frees dynamically allocated memory.

    -> new returns the address of allocated memory.
    -> Pointer stores that address.
    -> Use -> operator to access object members.
    -> Always free memory using delete.
*/

#include <iostream>
#include <string>
using namespace std;


// CLASS
class Student {

public:

    // Attributes
    string name;
    int age;
    float cgpa;


    // Constructor
    Student(string n, int a, float c) {
        name = n;
        age = a;
        cgpa = c;
    }


    // Member Function
    void display() {

        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "CGPA: " << cgpa << endl;

    }

};


int main() {

    // 1. Normal Object Creation
    Student s1("Raxit", 21, 7.76);

    cout << "Normal Object:" << endl;
    s1.display();


    // 2. Dynamic Object Creation using new
    Student *s2 = new Student("Gopi", 18, 9.1);

    cout << "\nDynamic Object:" << endl;

    // Access members using arrow operator
    s2->display();


    // 3. Free dynamically allocated memory
    delete s2;

    s2 = nullptr;

    return 0;
}
