#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<int, int> freq;
        for (int x : a)
        {
            freq[x]++;
        }
        int ans = 0;
        for (auto &p : freq)
        {
            ans += p.second / 2;
        }
        cout << ans << "\n";
    }
    return 0;
}