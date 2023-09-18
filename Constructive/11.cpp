#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;

        ans[val - 1] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i];

        if (i != n - 1)
            cout << " ";
    }
    cout << endl;

    return 0;
}