// AppendToList.cpp

#include <iostream>
using namespace std;

// Node structure for singly linked list

struct Node {
    int data;
    Node* next;
};

// Function to append a value at the end of the singly linked list

void appendToList(Node*& head, int value) {
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
    appendToList(head, 1);
    appendToList(head, 2);
    appendToList(head, 3);

    printList(head);

    return 0;
}
