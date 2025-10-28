//CountContinents.cpp

#include <bits/stdc++.h>
using namespace std;

// Program to count the number of continents on a planet map
// 1 represents land, 0 represents water
// Two 1s are part of the same continent if they are adjacent vertically or horizontally

ifstream ciin("fill.in");
ofstream coout("fill.out");

int a[501][501];

// Flood fill function to mark all connected land cells as water

void fill(int i, int j) {
    a[i][j] = 0;
    if(a[i+1][j] == 1) fill(i+1, j);
    if(a[i-1][j] == 1) fill(i-1, j);
    if(a[i][j+1] == 1) fill(i, j+1);
    if(a[i][j-1] == 1) fill(i, j-1);
}

int main() {
    int n, m, continents = 0;
    ciin >> n >> m;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
            ciin >> a[i][j];

    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
            if(a[i][j] == 1) {
                continents++;
                fill(i, j);
            }

    coout << continents;
    return 0;
}
