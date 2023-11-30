#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    long long n;

    cin >> n;

    int num = 0;
    long long ten = 10;
    while (n > 0)
    {
        long long dig = n % ten;

        if (dig == 4 || dig == 7)
        {
            num++;
        }

        n = n / ten;
    }

    if (num == 0)
    {
        cout << "NO" << endl;
        return 0;
    }
    while (num > 0)
    {
        int dig = num % 10;
        if (dig != 7 && dig != 4)
        {
            cout << "NO" << endl;
            return 0;
        }

        num /= 10;
    }

    cout << "YES" << endl;

    return 0;
}