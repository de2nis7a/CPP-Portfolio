//MaxSubmatrixSum.cpp

#include <bits/stdc++.h>
using namespace std;

// Maximum matrix size

const int MAXN = 301;

// Original matrix and prefix sums

int a[MAXN][MAXN], s[MAXN][MAXN];

// Temporary array to store column sums between two rows

int v[MAXN];

int main() {
    int n;
    cin >> n;

    // Read the n x n matrix
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];

    // Compute prefix sums for each column
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            s[i][j] = a[i][j] + s[i-1][j];

    int smax = a[1][1]; // Initialize maximum sum with first element

    // Enumerate all possible top and bottom rows of the submatrix
   
    for (int l1 = 1; l1 <= n; l1++) {
        for (int l2 = l1; l2 <= n; l2++) {

            // Compute the sum of elements in columns between rows l1 and l2
           
            for (int j = 1; j <= n; j++)
                v[j] = s[l2][j] - s[l1-1][j];

            // Apply Kadane's algorithm on the 1D array v[] to find maximum sum subarray
           
            int sum = v[1];
            int sc = max(0, v[1]);
            for (int i = 2; i <= n; i++) {
                sc += v[i];
                sum = max(sum, sc);
                if (sc < 0) sc = 0;
            }

            // Update overall maximum
           
            smax = max(smax, sum);
        }
    }

    cout << smax << endl;
    return 0;
}
