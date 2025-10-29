//MaxOfNNumbers.cpp

#include <iostream>
using namespace std;

// This program reads n integers and outputs the maximum among them.

int main() {
    int n, maxi, i, x;
    cin >> n >> maxi; // read the first number as initial maximum

    // Read the remaining numbers and update maximum

    for (i = 2; i <= n; i++) {
        cin >> x;
        if (x > maxi)
            maxi = x;
    }

    cout << maxi;
    return 0;
}
