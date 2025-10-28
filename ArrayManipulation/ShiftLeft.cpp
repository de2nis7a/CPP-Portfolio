// ShiftLeft.cpp

#include <iostream>
using namespace std;

// Function to perform a circular left shift on a given array
// Takes an array x of size n and shifts all elements one position to the left
// The first element moves to the last position, modifying the array in place

void shift(int x[], int n) {
    int aux = x[0];
    for(int i = 0; i < n-1; ++i)
        x[i] = x[i+1];
    x[n-1] = aux;
}

int main() {
    int n;
    cout << "Enter number of elements (n <= 100): ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; ++i)
        cin >> arr[i];

    shift(arr, n);

    cout << "Array after circular left shift: ";
    for(int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
