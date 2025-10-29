//SortVectorAscending.cpp

#include <iostream>
using namespace std;

// This program sorts the elements of a vector in ascending order.

int main() {
    int v[1001], n;
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    for (int i = 1; i <= n - 1; i++)
        for (int j = i + 1; j <= n; j++)
            if (v[i] > v[j])
                swap(v[i], v[j]);

    for (int i = 1; i <= n; i++)
        cout << v[i] << " ";

    return 0;
}
