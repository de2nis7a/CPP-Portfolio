//MaxEvenNumber.cpp

#include <iostream>
#include <fstream>
using namespace std;

// This program reads n natural numbers from a file
// and determines the largest even number and its count of occurrences.

int main() {
    ifstream f("maximpar.in");
    ofstream g("maximpar.out");

    int maxEven = -1, count = 0, n, number;
    f >> n; // read number of elements (optional, as we use while loop)

    while (f >> number) {
        if (number % 2 == 0) { // only consider even numbers
            if (number > maxEven) {
                maxEven = number;
                count = 1;
            } else if (number == maxEven) {
                count++;
            }
        }
    }

    if (maxEven == -1) {
        g << maxEven;
    } else {
        g << maxEven << " " << count;
    }

    f.close();
    g.close();
    return 0;
}
