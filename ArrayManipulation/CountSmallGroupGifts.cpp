//CountSmallGroupGifts.cpp

#include <iostream>
using namespace std;

// This program reads the number of gifts received by n children (n even)
// first half are older group, second half are younger group
// It counts how many children in the younger group received more gifts
// than any child in the older group.

int main() {
    int n;
    cin >> n;
    int v[n+1]; // 1-based indexing

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    // find the maximum gifts in the older group (first half)
 
    int maxOlder = v[1];
    for (int i = 2; i <= n/2; i++)
        if (v[i] > maxOlder)
            maxOlder = v[i];

    // count children in the younger group (second half) with more gifts than maxOlder
  
    int count = 0;
    for (int i = n/2 + 1; i <= n; i++)
        if (v[i] > maxOlder)
            count++;

    cout << count;
    return 0;
}
