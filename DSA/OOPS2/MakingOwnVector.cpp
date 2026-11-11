
/*
    TOPIC: Implementing Our Own Vector in C++

    FEATURES:
    1. push_back() -> Insert element at the end.
    2. pop_back()  -> Remove the last element.
    3. get()       -> Access element using index.
    4. size()      -> Return current number of elements.
    5. display()   -> Display all elements.

    IMPORTANT VARIABLES:
    arr      -> Pointer to dynamic array.
    capacity -> Total available storage.
    current  -> Number of elements stored.

    WORKING:
    Initially capacity = 2.
    When array becomes full, capacity doubles.
    Old elements are copied into the new array.
*/

#include <iostream>
using namespace std;

class MyVector {

private:

    int *arr;
    int capacity;
    int current;


public:

    // Constructor
    MyVector() {

        capacity = 2;
        current = 0;

        arr = new int[capacity];

    }


    // Insert element
    void push_back(int data) {

        // Check if array is full
        if (current == capacity) {

            capacity = capacity * 2;

            int *temp = new int[capacity];

            // Copy old elements
            for (int i = 0; i < current; i++) {
                temp[i] = arr[i];
            }

            // Delete old memory
            delete[] arr;

            // Point to new array
            arr = temp;

        }

        arr[current] = data;
        current++;

    }


    // Remove last element
    void pop_back() {

        if (current > 0) {
            current--;
        }

    }


    // Access element using index
    int get(int index) {

        if (index < 0 || index >= current) {
            cout << "Invalid Index!" << endl;
            return -1;
        }

        return arr[index];

    }


    // Return current size
    int size() {

        return current;

    }


    // Display elements
    void display() {

        for (int i = 0; i < current; i++) {
            cout << arr[i] << " ";
        }

        cout << endl;

    }


    // Destructor
    ~MyVector() {

        delete[] arr;

    }

/*     Important Points:
1. Name is the same as the class name, preceded by ~.
2. It has no return type.
3. It takes no arguments.
4. It is called automatically when an object goes out of scope or is deleted.
5. A class can have only one destructor.
 */
};


int main() {

    // Creating object
    MyVector v;


    // Inserting elements
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);


    cout << "Vector Elements: ";
    v.display();


    cout << "Size: " << v.size() << endl;


    // Access element
    cout << "Element at index 2: "
         << v.get(2) << endl;


    // Remove last element
    v.pop_back();


    cout << "After pop_back: ";
    v.display();


    cout << "New Size: " << v.size() << endl;


    return 0;
}
