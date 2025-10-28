// OddEvenReorder.cpp

#include <iostream>
using namespace std;

// Function to rearrange an array such that all odd numbers come first
// and even numbers follow. The function takes an array of natural numbers
// and its size, and rearranges the elements in-place.

void reorderOddEven(int v[], int n) {
    int i, j, aux;
    for(i = 0; i <= n - 2; i++)
        for(j = i + 1; j <= n - 1; j++)
            if(v[i] % 2 == 0 && v[j] % 2 == 1) {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
}

int main() {
    int arr[] = {2, 5, 6, 3, 8, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    reorderOddEven(arr, n);
    
    cout << "Reordered array: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    
    return 0;
}
