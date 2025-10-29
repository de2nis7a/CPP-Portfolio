//EvenOddIndexPrint.cpp

#include <iostream>
using namespace std;

// This program prints elements at even indices in ascending order and elements at odd indices in descending order.

int main() {
    int v[1001], i, n;
    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> v[i];

    // Print elements with even indices in ascending order

    for (i = 1; i <= n; i++)
        if (i % 2 == 0)
            cout << v[i] << " ";
    cout << '\n';

    // Print elements with odd indices in descending order

    for (i = n; i >= 1; i--)
        if (i % 2 == 1)
            cout << v[i] << " ";

    return 0;
}
