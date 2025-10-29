//NumberOfPages.cpp

#include <iostream>
using namespace std;

// This program calculates how many pages a book has
// given the total number of digits used to number the pages.

int main() {
    int n, totalPages = 0, pagesWithCurrentDigits = 9, digitsPerPage = 1;
    cin >> n;

    while (n > 0) {
        if (n - pagesWithCurrentDigits * digitsPerPage > 0) {
            n -= pagesWithCurrentDigits * digitsPerPage;
            totalPages += pagesWithCurrentDigits;
            digitsPerPage++;
            pagesWithCurrentDigits *= 10;
        } else {
            totalPages += n / digitsPerPage;
            n = 0;
        }
    }

    cout << totalPages;
    return 0;
}
