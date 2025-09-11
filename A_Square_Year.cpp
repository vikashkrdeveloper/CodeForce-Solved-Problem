#include <bits/stdc++.h>
using namespace std;

int parseSubstring(const string &s, int l, int r)
{
    int v = 0;
    for (int i = l; i < r; ++i)
        v = v * 10 + (s[i] - '0');
    return v;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        string s;
        cin >> s;
        if ((int)s.size() != 4)
        { // defensive
            cout << -1 << '\n';
            continue;
        }

        int year = parseSubstring(s, 0, 4);
        bool found = false;
        for (int cut = 1; cut < 4; ++cut)
        {
            int a = parseSubstring(s, 0, cut);
            int b = parseSubstring(s, cut, 4);
            long long sum = (long long)a + (long long)b;
            if (sum * sum == year)
            {
                cout << a << " " << b << '\n';
                found = true;
                break;
            }
        }
        if (!found)
            cout << -1 << '\n';
    }
    return 0;
}
