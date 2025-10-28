// AddToEndOfList.cpp

#include <iostream>
using namespace std;

// Node structure for singly linked list

struct Node {
    int data;
    Node* next;
};

// Function to add a value at the end of the singly linked list

void addToEnd(Node*& head, int value) {
    if (head == nullptr) {
        head = new Node{value, nullptr};
    } else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = new Node{value, nullptr};
    }
}


void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    addToEnd(head, 5);
    addToEnd(head, 10);
    addToEnd(head, 15);

    printList(head);

    return 0;
}
