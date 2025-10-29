//MinMaxValues.cpp

#include <iostream>
using namespace std;

// This program reads n integers and outputs the minimum and maximum values.

int main() {
    int n, v[1001], i, maxim, mini;

    cin >> n >> mini; // Read the first value as initial min and max
    maxim = mini;

    // Read remaining values and update min and max
  
    for (i = 2; i <= n; i++) {
        cin >> v[i];
        if (v[i] > maxim)
            maxim = v[i];
        if (v[i] < mini)
            mini = v[i];
    }

    cout << mini << " " << maxim;
    return 0;
}
