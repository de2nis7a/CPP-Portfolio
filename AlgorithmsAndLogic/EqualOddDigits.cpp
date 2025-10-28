// EqualOddDigits.cpp

#include <iostream>
using namespace std;

// Function to check if all odd digits of a natural number are equal
// The function takes a natural number n as input and returns 1 if all odd digits
// are equal, otherwise returns 0.

int equalOddDigits(int n) {
    int lastOdd = 0, digit;
    while(n > 0) {
        digit = n % 10;
        if(digit % 2 == 1) {
            if(lastOdd == 0)
                lastOdd = digit;
            else if(digit != lastOdd)
                return 0;
        }
        n /= 10;
    }
    return 1;
}

int main() {
    int num;
    cout << "Enter a natural number: ";
    cin >> num;
    cout << "All odd digits equal? " << equalOddDigits(num) << endl;
    return 0;
}
