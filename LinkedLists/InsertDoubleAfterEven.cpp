// InsertDoubleAfterEven.cpp

#include <iostream>
using namespace std;

// Node structure for singly linked list

struct Node {
    int data;
    Node* next;
};

// Function to insert double the value after each even element in the list

void insertDoubleAfterEven(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        if (current->data % 2 == 0) {
            Node* newNode = new Node;
            newNode->data = current->data * 2;
            newNode->next = current->next;
            current->next = newNode;
            current = newNode->next; // Skip the newly inserted node
        } else {
            current = current->next;
        }
    }
}

//Function to print the list for testing

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node{1, nullptr};
    Node* second = new Node{2, nullptr};
    Node* third = new Node{3, nullptr};
    head->next = second;
    second->next = third;

    insertDoubleAfterEven(head);
    printList(head);

    return 0;
}
