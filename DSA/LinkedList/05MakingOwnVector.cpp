
#include <iostream>
using namespace std;

// ======================================================
// NODE CLASS
// ======================================================

class Node {
public:
    int data;
    Node* next;

    // Constructor: Initialize a new node
    Node(int val) {
        data = val;
        next = NULL;
    }
};


// ======================================================
// LINKED LIST CLASS
// ======================================================

class LinkedList {
public:
    Node* head;
    int length;

    // Constructor: Initialize an empty linked list
    LinkedList() {
        head = NULL;
        length = 0;
    }


    // ==================================================
    // 1. INSERT OPERATIONS
    // ==================================================

    // Insert a new node at the beginning
    void insertAtHead(int val) {
        Node* newNode = new Node(val);

        newNode->next = head;
        head = newNode;

        length++;
    }

    // Insert a new node at the end
    void insertAtTail(int val) {
        Node* newNode = new Node(val);

        if (head == NULL) {
            head = newNode;
            length++;
            return;
        }

        Node* temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
        length++;
    }

    // Insert a new node at a given index (0-based)
    void insertAtIndex(int idx, int val) {
        if (idx < 0 || idx > length) {
            cout << "Invalid Index" << endl;
            return;
        }

        // Insert at head
        if (idx == 0) {
            insertAtHead(val);
            return;
        }

        Node* newNode = new Node(val);
        Node* temp = head;

        // Reach the node before the required index
        for (int i = 0; i < idx - 1; i++) {
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;

        length++;
    }


    // ==================================================
    // 2. DELETE OPERATIONS
    // ==================================================

    // Delete the first node
    void removeFromHead() {
        if (head == NULL) {
            cout << "Already empty" << endl;
            return;
        }

        Node* temp = head;
        head = head->next;

        delete temp;
        length--;
    }

    // Delete the last node
    void removeFromTail() {
        if (head == NULL) {
            cout << "Already empty" << endl;
            return;
        }

        // If only one node exists
        if (head->next == NULL) {
            delete head;
            head = NULL;
            length--;
            return;
        }

        Node* temp = head;

        // Reach the second-last node
        while (temp->next->next != NULL) {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;

        length--;
    }

    // Delete a node at a given index (0-based)
    void deleteAtIndex(int idx) {
        if (idx < 0 || idx >= length) {
            cout << "Invalid Index" << endl;
            return;
        }

        // Delete head
        if (idx == 0) {
            removeFromHead();
            return;
        }

        Node* temp = head;

        // Reach the node before the target
        for (int i = 0; i < idx - 1; i++) {
            temp = temp->next;
        }

        Node* toDelete = temp->next;

        temp->next = toDelete->next;

        delete toDelete;
        length--;
    }


    // ==================================================
    // 3. TRAVERSAL OPERATIONS
    // ==================================================

    // Display linked list from head to tail
    void display() {
        Node* temp = head;

        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }


    // ==================================================
    // 4. SEARCH, COUNT AND UPDATE OPERATIONS
    // ==================================================

    // To be implemented

    // Search for an element

    // Count total nodes

    // Update node value


    // ==================================================
    // 5. ADVANCED LINKED LIST OPERATIONS
    // ==================================================

    // To be implemented

    // Reverse linked list

    // Find middle node

    // Find Nth node from end


    // ==================================================
    // 6. SORTING AND DUPLICATE OPERATIONS
    // ==================================================

    // To be implemented

    // Sort linked list

    // Remove duplicates

    // Detect loop


    // ==================================================
    // 7. COMBINATION OPERATIONS
    // ==================================================

    // To be implemented

    // Concatenate two linked lists

    // Find intersection of two linked lists

};


// ======================================================
// MAIN FUNCTION
// ======================================================

int main() {
    LinkedList ll;

    // Insert operations
    ll.insertAtHead(20);
    ll.insertAtHead(10);

    ll.insertAtTail(30);
    ll.insertAtTail(40);

    cout << "Linked List: ";
    ll.display();

    // Delete operation
    ll.removeFromTail();

    cout << "After deleting tail: ";
    ll.display();

    return 0;
}
