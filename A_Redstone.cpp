#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> freq;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
        }

        bool ok = false;
        for (auto &p : freq)
        {
            if (p.second >= 2)
            {
                ok = true;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
