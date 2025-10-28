// PrintEvenInRange.cpp

#include <iostream>
using namespace std;

// Function to display all even natural numbers between two given numbers (inclusive)
// Parameters:
// - a, b: the range boundaries
// The function prints the even numbers in ascending order

void printEvenInRange(int a, int b) {
    if(a > b) swap(a, b); // ensure a <= b
    for(int i = a; i <= b; i++) {
        if(i % 2 == 0) cout << i << " ";
    }
}

int main() {
    int start, end;
    cout << "Enter two natural numbers: ";
    cin >> start >> end;
    cout << "Even numbers in range: ";
    printEvenInRange(start, end);
    cout << endl;
    return 0;
}
