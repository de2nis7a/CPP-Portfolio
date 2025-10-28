// SumFirstKOdd.cpp

#include <iostream>
using namespace std;

// Function to return the sum of the first k odd elements of an array
// Parameters:
// - n: the number of elements in the array
// - v: the array of natural numbers (up to 4 digits each)
// - k: the number of odd elements to sum
// Returns the sum of the first k odd elements, or -1 if there are fewer than k odd elements

int sumFirstKOdd(int n, int v[], int k) {
    int sum = 0;
    for(int i = 0; i < n && k > 0; i++) {
        if(v[i] % 2 == 1) {
            sum += v[i];
            k--;
        }
    }
    return (k == 0) ? sum : -1;
}

int main() {
    int n, k;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[51];
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) cin >> arr[i];
    cout << "Enter k: ";
    cin >> k;
    cout << "Sum of first " << k << " odd elements: " << sumFirstKOdd(n, arr, k) << endl;
    return 0;
}
