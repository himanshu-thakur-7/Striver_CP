#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    int minDist = INT_MAX;
    for (int meetingPoint = 1; meetingPoint <= 100; meetingPoint++)
    {
        int distTrav = abs(x1 - meetingPoint) + abs(x2 - meetingPoint) + abs(x3 - meetingPoint);
        minDist = min(distTrav, minDist);
    }

    cout << minDist << endl;

    return 0;
}