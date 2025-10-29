//RowSumsMatrix.cpp

#include <iostream>
using namespace std;

int main()
{
    int v[101][101]; // matrix
    int n, m;        // number of rows and columns
    int s;           // sum of elements on each row

    cin >> n >> m;

    // Read the matrix
   
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin >> v[i][j];

    // Compute and print the sum for each row
  
    for(int i = 1; i <= n; i++)
    {
        s = 0;
        for(int j = 1; j <= m; j++)
            s += v[i][j];
        cout << s << " ";
    }

    return 0;
}
