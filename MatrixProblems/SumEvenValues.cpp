//SumEvenValues.cpp

#include <iostream>
using namespace std;

// This program calculates the sum of all even numbers in a given n x m matrix.

int main() {
    int n, m, v[101][101], S = 0;
    cin >> n >> m; // First input is number of rows (n), then columns (m)
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> v[i][j];
            if (v[i][j] % 2 == 0)
                S += v[i][j];
        }
    }
    cout << S;
    return 0;
}
