/* Member Function: Function declared inside a class.
Accessing Attributes: Member functions can directly access class attributes.
Function Calling: Use the object name followed by dot (.) operator
 */


 
#include <iostream>
#include <string>
using namespace std;

class Student {

public:

    // Attributes (Data Members)
    string name;
    int age;
    float cgpa;


    // Constructor
    Student(string n, int a, float cg) {
        name = n;
        age = a;
        cgpa = cg;
    }


    // MEMBER FUNCTION (Function inside class)
    void display() {

        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "CGPA: " << cgpa << endl;

    }

};


int main() {

    // Creating an object
    Student s1("Raxit", 21, 7.76);

    // Calling member function using object
    s1.display();

    return 0;
}






/* 3. Function Outside Class (Using Scope Resolution Operator)
We can also declare a function inside the class and define it outside using ::.



class Student {

public:
    string name;

    void display();  // Function declaration

};

// Function definition outside class
void Student::display() {

    cout << name << endl;

} */