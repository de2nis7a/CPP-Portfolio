//DominoSum.cpp

#include <iostream>
using namespace std;

// This program calculates the total sum of all dots on distinct domino pieces
// with at most n dots on each end.

int main() {
    long long n;
    cin >> n;
    cout << n * (n + 1) * (n + 2) / 2;
    return 0;
}
