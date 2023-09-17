#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> hts(n);

    int htMax = INT_MIN;
    int htMin = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        cin >> hts[i];
        htMax = max(htMax, hts[i]);
        htMin = min(htMin, hts[i]);
    }

    long long ans = 0;

    int maxIndex = -1;
    int minIndex = -1;
    for (int i = 0; i < n; i++)
    {
        if (hts[i] == htMax)
        {
            maxIndex = i;
            ans += i;
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (hts[i] == htMin)
        {
            minIndex = i;
            ans += n - 1 - i;
            break;
        }
    }

    if (maxIndex > minIndex)
    {
        ans -= 1;
    }
    cout << ans << endl;

    return 0;
}