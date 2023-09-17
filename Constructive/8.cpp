#include <bits/stdc++.h>
using namespace std;

int numFaces(string name)
{
    if (name == "Tetrahedron")
    {
        return 4;
    }
    else if (name == "Cube")
    {

        return 6;
    }
    else if (name == "Octahedron")
    {

        return 8;
    }
    else if (name == "Dodecahedron")
    {

        return 12;
    }
    else
    {

        return 20;
    }
}

int main()
{
    int n;
    cin >> n;

    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        string shape;
        cin >> shape;
        ans += numFaces(shape);
    }

    cout << ans << endl;

    return 0;
}