//MinimumQueuesForDonuts.cpp

// This program determines the minimum number of queues needed so that 
// each person sees the donuts, respecting the order and height constraints.

#include <bits/stdc++.h>
using namespace std;

ifstream f("gogosi.in");
ofstream g("gogosi.out");

unsigned long long v[1000001], loc;

// Function to find the appropriate queue for the current height

int cb(int x) {
    int poz = -1, st, dr, m;
    dr = loc;
    st = 1;
    while (st <= dr) {
        m = (st + dr) / 2;
        if (x >= v[m]) {
            poz = m;
            dr = m - 1;
        } else st = m + 1;
    }
    return poz;
}

int main() {
    unsigned long long n, i, h, k;
    f >> n;
    loc = 0;
    f >> v[++loc];
    for (i = 2; i <= n; i++) {
        f >> h;
        k = cb(h);
        if (k == -1)
            v[++loc] = h;
        else 
            v[k] = h;
    }
    g << loc;
    return 0;
}
