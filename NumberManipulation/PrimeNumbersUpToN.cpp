//PrimeNumbersUpToN.cpp

#include <bits/stdc++.h>
using namespace std;

// This program prints all prime numbers from 1 to n using the Sieve of Eratosthenes.

int main() {
    int n;
    cin >> n;

    bool isPrime[n + 1];
    memset(isPrime, true, sizeof(isPrime));

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i + i; j <= n; j += i)
                isPrime[j] = false;
        }
    }

    for (int i = 2; i <= n; i++)
        if (isPrime[i])
            cout << i << " ";

    return 0;
}
