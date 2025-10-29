// RemoveMiddleDigit.cpp

#include <iostream>
using namespace std;

// Reads a three-digit number and outputs the number obtained by removing its middle digit.

int main() {
    int n, m, cu, cs;
    cin >> n;

    cu = n % 10;         // units digit
    cs = n / 100 % 10;   // hundreds digit
    m = cs * 10 + cu;    // new number after removing the middle digit

    cout << m;
    return 0;
}