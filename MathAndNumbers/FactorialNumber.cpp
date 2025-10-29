//FactorialNumber.cpp

#include <iostream>
using namespace std;

int main()
{
    long long n;       // input number
    long long fact = 1; // factorial result

    cin >> n;

    // Compute factorial
    for(long long i = 1; i <= n; i++)
        fact *= i;

    // Print result
    cout << fact;

    return 0;
}
