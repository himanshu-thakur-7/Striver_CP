#include "bits/stdc++.h"
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int x = 0;
    while (n--)
    {
        string stmt;
        cin >> stmt;

        if (stmt[0] == '+' || stmt[2] == '+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    cout << x << endl;
}