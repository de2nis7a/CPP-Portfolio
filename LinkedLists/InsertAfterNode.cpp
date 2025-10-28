// InsertAfterNode.cpp

#include <iostream>
using namespace std;

// Node structure for singly linked list

struct Node {
    int data;
    Node* next;
};

// Function to insert a new node with value x after a given node q

void insertAfter(Node* head, Node* q, int x) {
    Node* newNode = new Node;
    newNode->data = x;
    newNode->next = q->next;
    q->next = newNode;
}

// Optional: Function to print the list for testing

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
    head->next = second;

    insertAfter(head, head, 5); // Insert 5 after the first node
    printList(head);

    return 0;
}
