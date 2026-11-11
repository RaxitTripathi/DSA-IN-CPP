
/*
    PROGRAM: Perform All Operations on Complex Numbers
    Using Class and Member Functions.

    Complex Number = a + bi

    a = Real Part
    b = Imaginary Part
    i = Imaginary Unit (i*i = -1)

    OPERATIONS:

    1. Addition:
       (a+bi) + (c+di) = (a+c) + (b+d)i

    2. Subtraction:
       (a+bi) - (c+di) = (a-c) + (b-d)i

    3. Multiplication:
       (a+bi) * (c+di) = (ac-bd) + (ad+bc)i

    4. Division:
       (a+bi) / (c+di)
       = [(ac+bd) + (bc-ad)i] / (c*c + d*d)

    NOTE:
    Division is not possible if the second complex
    number is zero (c = 0 and d = 0).
*/

#include <iostream>
using namespace std;

class Complex {

public:

    // Attributes
    int real;
    int img;


    // Parameterized Constructor
    Complex(int r, int i) {
        real = r;
        img = i;
    }


    // 1. Addition
    void add(Complex c) {

        int r = real + c.real;
        int i = img + c.img;

        cout << "Addition: "
             << r << " + " << i << "i" << endl;
    }


    // 2. Subtraction
    void subtract(Complex c) {

        int r = real - c.real;
        int i = img - c.img;

        cout << "Subtraction: "
             << r << " + " << i << "i" << endl;
    }


    // 3. Multiplication
    void multiply(Complex c) {

        int r = (real * c.real) - (img * c.img);
        int i = (real * c.img) + (img * c.real);

        cout << "Multiplication: "
             << r << " + " << i << "i" << endl;
    }


    // 4. Division
    void divide(Complex c) {

        int denominator = (c.real * c.real)
                        + (c.img * c.img);

        if (denominator == 0) {
            cout << "Division not possible!" << endl;
            return;
        }

        double r = (double)(real * c.real
                          + img * c.img) / denominator;

        double i = (double)(img * c.real
                          - real * c.img) / denominator;

        cout << "Division: "
             << r << " + " << i << "i" << endl;
    }

};


int main() {

    // Creating two complex number objects
    Complex c1(3, 4);  // 3 + 4i
    Complex c2(2, 5);  // 2 + 5i


    // Calling member functions
    c1.add(c2);

    c1.subtract(c2);

    c1.multiply(c2);

    c1.divide(c2);


    return 0;
}
