//MariaDanceAreas.cpp

#include <iostream>
#include <fstream>
using namespace std;

// This program calculates the number of days Maria can dance in a rectangular area
// of size p x q (or q x p) in a hall divided into n x m sectors with obstacles.

ifstream fin("maria.in");
ofstream fout("maria.out");

int a[1005][1005], s[1005][1005], n, m, p, q;

int main() {
    int k;
    fin >> n >> m >> p >> q >> k;

    // Mark obstacles in the hall
   
    for(int pp = 1; pp <= k; ++pp) {
        int i, j;
        fin >> i >> j;
        a[i][j] = 1;
    }

    // Build prefix sum matrix for obstacle counting
  
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
            s[i][j] = s[i-1][j] + s[i][j-1] - s[i-1][j-1] + a[i][j];

    int Z = 0;

    // Check all possible rectangles p x q and q x p
  
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= m; ++j) {
            int x = i + p - 1, y = j + q - 1;
            if(x <= n && y <= m)
                if(s[x][y] - s[x][j-1] - s[i-1][y] + s[i-1][j-1] == 0)
                    Z++;

            x = i + q - 1; y = j + p - 1;
            if(x <= n && y <= m)
                if(s[x][y] - s[x][j-1] - s[i-1][y] + s[i-1][j-1] == 0)
                    Z++;
        }
    }

    fout << Z;
    return 0;
}
