#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i % 2 == 0 || (((i - 3) % 4 == 0 && j == 0) || ((i - 1) % 4 == 0 && j == m - 1)))
            {
                cout << '#';
            }
            else
            {
                cout << '.';
            }
        }
        cout << endl;
    }

    return 0;
}