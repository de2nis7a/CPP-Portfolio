//NextTwoEvenNumbers.cpp

#include <iostream>
using namespace std;

// Finds the two smallest even numbers greater than a given natural number n.

int main() {
    long long n;
    cout << "Enter a natural number: ";
    cin >> n;

    if (n % 2 == 0)
        cout << "Next two even numbers: " << n + 2 << " " << n + 4 << endl;
    else
        cout << "Next two even numbers: " << n + 1 << " " << n + 3 << endl;

    return 0;
}