//SmallestPerfectSquareMultiple.cpp

#include <iostream>
#include <cmath>
using namespace std;

// Function to return the smallest non-zero multiple of n
// that is also a perfect square

int multiplu(int n) {
    int i = n;
    while (true) {
        double sq = sqrt(i);
        if (sq == (int)sq)  // Check if perfect square
            return i;
        i += n;
    }
}

int main() {
    int n;
    cout << "Enter a natural number: ";
    cin >> n;

    int result = multiplu(n);
    cout << "Smallest non-zero multiple of " << n 
         << " that is a perfect square: " << result << endl;

    return 0;
}
