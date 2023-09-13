#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x;
    cin >> x;

    long long revAns = 0;
    long long ans = 0;
    int digits = 0;
    while (x > 0)
    {
        int digit = x % 10;

        if (digit > 9 - digit)
        {
            if (9 - digit == 0 && (x / 10 == 0))
            {
                digit = digit;
                // add same digit to answer
            }
            else
            {
                digit = 9 - digit;
                // change
            }
        }

        revAns = revAns * 10 + digit;

        x = x / 10;
        digits++;
    }

    // cout << revAns << endl;
    while (revAns > 0)
    {
        ans = ans * 10 + revAns % 10;

        revAns /= 10;
        digits--;
    }

    // cout << digits << endl;
    ans = ans * pow(10, double(digits));

    cout << ans << endl;
}