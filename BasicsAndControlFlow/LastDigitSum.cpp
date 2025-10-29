//LastDigitSum.cpp

#include <iostream>
using namespace std;

// This program reads two natural numbers and outputs the last digit of their sum.

int main() {
    int x, y;
    cin >> x >> y;
    int sum = x + y;
    cout << sum % 10;
    return 0;
}
