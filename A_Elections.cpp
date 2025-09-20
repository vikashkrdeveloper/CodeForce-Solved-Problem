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
        long long a, b, c;
        cin >> a >> b >> c;
        long long mx = max({a, b, c});
        cout << (mx == a ? max(0LL, mx - a + 1) : mx - a + 1) << ' ';
        cout << (mx == b ? max(0LL, mx - b + 1) : mx - b + 1) << ' ';
        cout << (mx == c ? max(0LL, mx - c + 1) : mx - c + 1) << '\n';
    }
    return 0;
}