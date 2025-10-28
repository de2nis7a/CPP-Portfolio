// SumNumbersInString.cpp

#include <iostream>
#include <cstring>

using namespace std;

// This program reads a string containing letters, digits, punctuation, spaces, and other ASCII symbols.
// It identifies sequences of digits as numbers and calculates the sum of all these numbers.

int main()
{
    char s[256];
    cin.getline(s, 256);

    int suma = 0; // Sum of numbers
    int nr = 0;   // Current number being formed

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= '0' && s[i] <= '9') // If character is a digit
            nr = nr * 10 + (s[i] - '0'); // Form the number
        else
        {
            suma += nr; // Add the completed number to the sum
            nr = 0;     // Reset current number
        }
    }

    // Add the last number if string ends with a digit
    
    suma += nr;

    cout << suma;
    return 0;
}
