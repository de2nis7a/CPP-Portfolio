//SumOfDivisors.cpp

#include <iostream>
using namespace std;

// This program reads a natural number n and calculates the sum of all its divisors.

int main() {
    long long n, sum = 0, i;
    cin >> n;

    for (i = 1; i * i < n; i++) {
        if (n % i == 0)
            sum += i + n / i;
    }

    if (i * i == n) // If n is a perfect square, add the square root only once
        sum += i;

    cout << sum;
    return 0;
}
