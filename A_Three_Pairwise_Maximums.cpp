#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int mx = max({x, y, z});
        if ((x == mx && y == mx) || (x == mx && z == mx) || (y == mx && z == mx))
        {
            cout << "YES\n";
            cout << mx << " " << min({x, y, z}) << " " << min({x, y, z}) << "\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}