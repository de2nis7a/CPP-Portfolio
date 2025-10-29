//AddToTriple.cpp

#include <iostream>
using namespace std;

//Determines the value to add to x to get three times y.

int main() {
    unsigned int x, y;
    cout << "Enter two natural numbers (x and y): ";
    cin >> x >> y;

    int toAdd = 3 * y - x;
    cout << "Value to add to x to get 3*y: " << toAdd << endl;

    return 0;
}