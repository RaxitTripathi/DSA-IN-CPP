
/*
    TOPIC: Access Modifiers in C++

    1. Public:
       Accessible from anywhere using an object.

    2. Private:
       Accessible only inside the same class.
    //    (Default access modifier in a class.)

    3. Protected:
       Accessible inside the same class and
       its derived (child) classes.
*/

#include <iostream>
using namespace std;

class Student {

public:

    // PUBLIC: Accessible outside the class
    string name = "Raxit";


private:

    // PRIVATE: Accessible only inside the class
    int age = 21;


protected:

    // PROTECTED: Accessible inside derived classes
    float cgpa = 7.76;


public:

    // Public function to access private and protected data
    void display() {

        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "CGPA: " << cgpa << endl;

    }

};


int main() {

    Student s1;

    // Public member: Allowed
    cout << s1.name << endl;

    // Private and protected members:
    // Direct access is not allowed.

    // cout << s1.age;
    // cout << s1.cgpa;

    // Access through public member function
    s1.display();

    return 0;
}
