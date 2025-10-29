//SumOfPrefixes.cpp

#include <iostream>
using namespace std;

// This program reads a natural number n and calculates the sum of all distinct prefix numbers of n.

int main() {
    unsigned int n, sum = 0;
    cin >> n;

    while (n > 0) {
        sum += n;   // add current prefix
        n /= 10;    // remove last digit
    }

    cout << sum;
    return 0;
}
