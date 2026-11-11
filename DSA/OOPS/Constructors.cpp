
/*
    TOPIC: Classes, Objects and Constructors in C++

    A constructor is a special member function that is
    automatically called when an object is created.

    It is mainly used to initialize object attributes.
*/

#include <iostream>
#include <string>
using namespace std;


// CLASS: Student
class Student {

public:

    // ATTRIBUTES (Data Members)
    int age;
    string name;
    float cgpa;


    // 1. PARAMETERIZED CONSTRUCTOR
    // Accepts values as arguments and initializes attributes.
    Student(string n, int a, float cg) {

        name = n;
        age = a;
        cgpa = cg;

    }


    // 2. DEFAULT CONSTRUCTOR
    // Called when an object is created without arguments.
    Student() {

        // Default initialization values
        name = "Unknown";
        age = 0;
        cgpa = 0.0;

    }

};


int main() {

    // OBJECT 1: Created using Default Constructor
    Student x;

    x.name = "Raxit";
    x.age = 17;
    x.cgpa = 9.1;

    cout << "Student 1: " << x.name << endl;


    // OBJECT 2: Created using Default Constructor
    Student y;

    y.name = "GOPI";
    y.age = 18;
    y.cgpa = 9.1;

    cout << "Student 2: " << y.name << endl;


    // OBJECT 3: Created using Parameterized Constructor
    // Values are initialized directly during object creation.
    Student z("Rax", 12, 3.2);

    cout << "Student 3: " << z.name << endl;
    cout << "Age: " << z.age << endl;
    cout << "CGPA: " << z.cgpa << endl;


    return 0;
}
