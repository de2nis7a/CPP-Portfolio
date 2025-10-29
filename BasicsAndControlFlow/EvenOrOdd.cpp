//EvenOrOdd.cpp

#include <iostream>
using namespace std;

// This program reads a natural number from the keyboard
// and checks whether it is even or odd.

int main() {
    int n;
    cin >> n;

    if (n % 2 == 0)
        cout << n << " este par";
    else
        cout << n << " este impar";

    return 0;
}
