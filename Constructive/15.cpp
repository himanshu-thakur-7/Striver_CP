#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{

    long long k, n, w;
    cin >> k >> n >> w;
    long long ans = w * (w + 1) * k / 2 - n;
    if (ans <= 0)
        ans = 0;
    cout << ans << endl;
    return 0;
}
