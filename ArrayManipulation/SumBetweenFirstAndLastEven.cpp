//SumBetweenFirstAndLastEven.cpp

#include <iostream>
using namespace std;

// This program calculates the sum of elements between the first and last even elements of an array (inclusive).

int main() {
    int v[1001], poz1 = -1, poz2 = -1, n, i, S = 0;

    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> v[i];

    // Find first even element
 
    for (i = 1; i <= n; i++)
        if (v[i] % 2 == 0) {
            poz1 = i;
            break;
        }

    // Find last even element
  
    for (i = n; i >= 1; i--)
        if (v[i] % 2 == 0) {
            poz2 = i;
            break;
        }

    if (poz1 == -1)
        cout << "NU EXISTA";
    else {
        S = 0;
        for (i = poz1; i <= poz2; i++)
            S += v[i];
        cout << S;
    }

    return 0;
}
