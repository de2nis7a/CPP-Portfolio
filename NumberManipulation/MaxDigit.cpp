//MaxDigit.cpp

#include <iostream>
using namespace std;

// This program finds the largest digit in a natural number.

int main() {
    int a, cm = 0, uc;
    cin >> a;
    while (a > 0) {
        uc = a % 10;
        if (uc > cm)
            cm = uc;
        a = a / 10;
    }
    cout << cm;
    return 0;
}
