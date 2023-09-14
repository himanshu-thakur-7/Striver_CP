#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int toastsByDrinks = (k * l) / nl;

    int toastsByLime = c * d;

    int toastsBySalt = p / np;

    int total = min(toastsByDrinks, min(toastsByLime, toastsBySalt)) / n;

    cout << total << endl;

    return 0;
}