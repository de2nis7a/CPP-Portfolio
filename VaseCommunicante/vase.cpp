#include <fstream>
#include <iostream>

#define NN 100001
using namespace std;

int main() {
    int n, x, v[NN];         // n = number of liquids, x = color of interest, v[i] = volume of liquid i
    long long int s = 0;      // total volume of all liquids
    long long st, dr;         // interval occupied by liquid of color x
    char d[NN];               // d[i] = 'S' for left branch, 'D' for right branch

    ifstream fin("vase1.in");
    fin >> n;

    // Read volumes and branch directions for each liquid
    
    for (int i = 1; i <= n; ++i) {
        fin >> v[i] >> d[i];
        s += v[i];   // accumulate total volume
    }
    fin >> x;   // color of liquid to track

    // Calculate the level reached by the liquids up to color x
    
    long long ss = 0;
    for (int i = 1; i < x; ++i)
        ss += v[i];
    ss /= 2;   // divide by 2 because liquids distribute evenly in two branches

    // Determine initial interval of liquid x
    
    int i = x;
    if (d[i] == 'S')       // left branch
        st = -ss - v[i]/2, dr = -ss + v[i]/2;
    else                   // right branch
        st = ss - v[i]/2, dr = ss + v[i]/2;

    // Update the interval occupied by liquid x for all liquids added after it
    
    for (i = x+1; i <= n; ++i) {
        if (d[i] == 'S') {       // left branch shifts interval positively
            st = st + v[i]/2;
            dr = dr + v[i]/2;
        } else {                 // right branch shifts interval negatively
            st = st - v[i]/2;
            dr = dr - v[i]/2;
        }
    }

    ofstream fout("vase1.out");

    // Output maximum level reached (half of total volume)
    
    fout << s/2 << endl;

    // Output the interval where liquid x is located
    
    if (st >= 0) {              // interval fully on right branch
        fout << dr << " D\n" << st << " D\n";
    } else if (dr <= 0) {       // interval fully on left branch
        fout << -st << " S\n" << -dr << " S\n";
    } else {                     // interval crosses the middle
        fout << -st << " S\n" << dr << " D\n";
    }

    return 0;
}
