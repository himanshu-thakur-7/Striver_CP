#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int t;

    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> rounds;

        int place = 0;
        while (n > 0)
        {
            int dig = n % 10;

            if (dig != 0)
            {
                rounds.push_back(dig * pow(10, place));
            }

            n = n / 10;
            place++;
        }

        cout << rounds.size() << endl;

        for (int r = 0; r < rounds.size(); r++)
        {
            cout << rounds[r];

            if (r != rounds.size() - 1)
            {
                cout << " ";
            }
            else
                cout << endl;
        }
    }

    return 0;
}