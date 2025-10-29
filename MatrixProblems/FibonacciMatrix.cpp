//FibonacciMatrix.cpp

// This program reads a natural number n and constructs an n x n matrix
// filled with Fibonacci numbers arranged in a specified order.

#include <iostream>
using namespace std;

int main()
{
    int v[25][25], a = 1, aa = 1, aux, n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 1) // Odd rows: left to right
        {
            for(int j = 1; j <= n; j++)
            {
                if(i == 1 && j <= 2)
                    v[i][j] = 1;
                else
                {
                    v[i][j] = aa + a;
                    aux = a;
                    a = v[i][j];
                    aa = aux;
                }
            }
        }
        else // Even rows: right to left
        {
            for(int j = n; j >= 1; j--)
            {
                v[i][j] = aa + a;
                aux = a;
                a = v[i][j];
                aa = aux;
            }
        }
    }

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
            cout << v[i][j] << " ";
        cout << '\n';
    }

    return 0;
}
