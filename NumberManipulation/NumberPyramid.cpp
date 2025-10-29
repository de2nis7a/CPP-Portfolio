//NumberPyramid.cpp

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Loop through each row of the pyramid
    
    for(int i = 1; i <= n; i++) {
   
        // Print numbers from 1 up to the current row number
   
        for(int k = 1; k <= i; k++)
            cout << k << " ";
        cout << '\n'; // Move to the next row
    }

    return 0;
}
