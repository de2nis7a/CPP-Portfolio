//MaxNumberFromDigits.cpp

#include <iostream>
using namespace std;

// Function to return the largest number that can be formed using the digits of a given natural number

int maxNumberFromDigits(int n) {
    int a[10], poz = 0, aux, i, j;
    int original = n; // Store original number

    // Extract digits into array a[]

    while (n) {
        a[poz++] = n % 10;
        n /= 10;
    }

    // Sort digits in descending order

    for(i = 0; i < poz - 1; i++)
        for(j = i + 1; j < poz; j++)
            if(a[i] < a[j]) {
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }

    // Build the number from sorted digits
    
    int result = 0;
    for(i = 0; i < poz; i++)
        result = result * 10 + a[i];

    return result;
}

int main() {
    int num;
    cout << "Enter a natural number: ";
    cin >> num;

    int result = maxNumberFromDigits(num);
    cout << "Largest number from digits: " << result << endl;

    return 0;
}
