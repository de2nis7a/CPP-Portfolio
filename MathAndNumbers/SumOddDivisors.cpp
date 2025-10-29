//SumOddDivisors.cpp

#include <iostream>
using namespace std;

// This program reads a natural number n and calculates the sum of its odd divisors.

int main() {
    long long n, sum = 0;
    cin >> n;
    long long div1, div2;
    long long i;
    for (i = 1; i * i < n; i++) {
        if (n % i == 0) {
            div1 = i;
            div2 = n / i;
            if (div1 % 2 == 1)
                sum += div1;
            if (div2 % 2 == 1)
                sum += div2;
        }
    }
    if (i * i == n && i % 2 == 1)
        sum += i;

    cout << sum;
    return 0;
}
