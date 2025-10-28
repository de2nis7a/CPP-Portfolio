//SumCommonDivisors.cpp

#include <iostream>
using namespace std;

// Function to return the sum of all natural divisors common to a and b

int suma(int a, int b) {
    int s = 0;
    int d;
    int aux;

    // Ensure a >= b for loop convenience
    
    if(a < b) {
        aux = a;
        a = b;
        b = aux;
    }

    for(d = 1; d <= a; d++)
        if(a % d == 0 && b % d == 0)
            s += d;

    return s;
}

int main() {
    int a, b;
    cout << "Enter two natural numbers: ";
    cin >> a >> b;

    int result = suma(a, b);
    cout << "Sum of common divisors: " << result << endl;

    return 0;
}
