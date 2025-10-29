//EvenOddDifference.cpp

#include <iostream>
using namespace std;

// This program calculates the absolute difference between the count of even and odd numbers in an array.

int main() {
    int v[1001], catePare = 0, cateImpare = 0, i, n, C;

    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> v[i];
        if (v[i] % 2 == 0)
            catePare++;
        else
            cateImpare++;
    }

    C = catePare - cateImpare;
    if (C < 0)
        C = -C;

    cout << C;
    return 0;
}
