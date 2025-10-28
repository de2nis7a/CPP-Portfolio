// WaveArray.cpp

#include <iostream>
using namespace std;

// Function to construct an array of 2*n distinct natural numbers
// - Odd numbers are strictly increasing
// - Even numbers are strictly decreasing
// - The array alternates between odd and even numbers
// Parameters:
// - n: half the size of the array
// - v: output array of size 2*n

void waveArray(int n, int *v) {
    for(int i = 0, j = 1; i < 2*n; i += 2, j += 2)
        v[i] = j;         // fill odd positions with increasing odd numbers
    for(int i = 1, j = 2*n; i < 2*n; i += 2, j -= 2)
        v[i] = j;         // fill even positions with decreasing even numbers
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    int *arr = new int[2*n]; // dynamic array allocation
    waveArray(n, arr);
    cout << "Wave array: ";
    for(int i = 0; i < 2*n; i++) cout << arr[i] << " ";
    cout << endl;
    delete[] arr; // avoid memory leak
    return 0;
}
