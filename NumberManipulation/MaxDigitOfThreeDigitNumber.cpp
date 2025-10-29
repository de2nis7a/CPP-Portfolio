//MaxDigitOfThreeDigitNumber.cpp

#include <iostream>
using namespace std;

// This program finds and prints the largest digit of a three-digit natural number.

int main() {
    int n, a, b, c, maxi;
    cin >> n;

    a = n % 10;        // units digit
    b = n / 10 % 10;   // tens digit
    c = n / 100;       // hundreds digit

    maxi = max(a, max(b, c));
    cout << maxi;

    return 0;
}
