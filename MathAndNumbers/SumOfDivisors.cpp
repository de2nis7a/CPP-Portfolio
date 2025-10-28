// SumOfDivisors.cpp

#include <iostream>
using namespace std;

// Function to calculate the sum of all divisors of a natural number
// The function takes an integer as input and returns the sum of its divisors

int sumOfDivisors(int a) {
    int sum = 0;
    for (int div = 1; div <= a; div++) {
        if (a % div == 0) {
            sum += div;
        }
    }
    return sum;
}

int main() {
    int num;
    cout << "Enter a natural number: ";
    cin >> num;
    cout << "Sum of divisors: " << sumOfDivisors(num) << endl;
    return 0;
}
