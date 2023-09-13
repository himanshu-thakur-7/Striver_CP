#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n = 5;

    int matrix[n][n];

    int row_1 = -1;
    int col_1 = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1)
            {
                row_1 = i;
                col_1 = j;
            }
        }
    }

    int minMoves = abs(2 - row_1) + abs(2 - col_1);

    cout << minMoves << endl;

    return 0;
}