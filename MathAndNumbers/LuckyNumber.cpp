//LuckyNumber.cpp

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Check if n is even; only odd n can be lucky
  
    if (n % 2 == 0) {
        cout << "NOT LUCKY";
    } else {
   
        // For odd n, n^2 can be expressed as sum of n consecutive numbers
        // Starting number is (n+1)/2
   
        int start = (n + 1) / 2;
        for (int i = 0; i < n; i++) {
            cout << start + i << " ";
        }
    }

    return 0;
}
