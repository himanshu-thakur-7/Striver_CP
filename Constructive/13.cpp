#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int temp = 0;
    int ans = INT_MIN;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        temp = temp - a + b;

        ans = max(ans, temp);
    }

    cout << ans << endl;

    return 0;
}
