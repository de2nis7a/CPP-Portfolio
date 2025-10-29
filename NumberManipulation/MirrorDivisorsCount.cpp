//MirrorDivisorsCount.cpp

#include <iostream>
using namespace std;

// This program reads a natural number, calculates its mirror, and counts the number of divisors of the mirrored number.

int main() {
    long long n, D = 0, i, ogl;
    cin >> n;

    // Compute the mirror of n

    ogl = 0;
    long long temp = n;
    while (temp != 0) {
        ogl = ogl * 10 + temp % 10;
        temp /= 10;
    }

    // Count divisors of the mirrored number

    for (i = 1; i * i < ogl; i++) {
        if (ogl % i == 0)
            D += 2; // i and ogl/i are divisors
    }
    if (i * i == ogl)
        D++; // perfect square adjustment

    cout << D;
    return 0;
}
