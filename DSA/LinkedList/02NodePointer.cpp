
#include <iostream>
using namespace std;

// Creating a Node
class Node {

public:

    int data;
    Node* next;

    // Constructor
    Node(int val) {

        data = val;
        next = NULL;

    }

};

int main() {

    // Creating three nodes dynamically       // it made a bracket first with add of any dynamically no name new node where 10 is stored  in it and in 31 line we store add of second in first next
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    // Connecting nodes using pointers
    first->next = second;
    second->next = third;
    third->next = NULL;


    

    //now if i need to print second val using a we do like
    cout<<first->next->data<<endl;

    //to print third
    cout<<first->next->next->data<<endl;






   /*  // Printing  full Linked List and list 
    Node* temp = first;

    while(temp != NULL) {

        cout << temp->data << " ";

        temp = temp->next;

    }

    // Free allocated memory
    delete first;
    delete second;
    delete third;
 */
    return 0;
}
