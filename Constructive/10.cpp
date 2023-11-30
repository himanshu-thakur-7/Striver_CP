#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    string ans = "EASY";
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;

        if (val == 1)
        {
            ans = "HARD";
        }
    }

    cout << ans << endl;
    return 0;
}