#include <iostream>
using namespace std;

// Node structure for singly linked list

struct Node {
    int info;
    Node* urm;
};

// Function to insert a value x into a sorted singly linked list
// so that the list remains sorted in ascending order

void ins_cresc(Node*& p, int x) {
    Node* nou = new Node;
    nou->info = x;
    nou->urm = nullptr;

    // If list is empty or x should be new head

    if (p == nullptr || x < p->info) {
        nou->urm = p;
        p = nou;
        return;
    }

    // Traverse the list to find the correct position

    Node* t = p;
    while (t->urm != nullptr && t->urm->info < x)
        t = t->urm;

    nou->urm = t->urm;
    t->urm = nou;
}

int main() {
    Node* head = nullptr;

    ins_cresc(head, 5);
    ins_cresc(head, 2);
    ins_cresc(head, 8);
    ins_cresc(head, 3);

    //Print
    Node* current = head;
    cout << "Sorted list: ";
    while (current != nullptr) {
        cout << current->info << " ";
        current = current->urm;
    }
    cout << endl;

    //Free memory
    while (head != nullptr) {
        Node* temp = head;
        head = head->urm;
        delete temp;
    }

    return 0;
}
