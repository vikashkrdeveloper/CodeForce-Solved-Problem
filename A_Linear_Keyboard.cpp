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
        string s, p;
        cin >> s >> p;
        vector<int> pos(26);
        for (int i = 0; i < 26; i++)
            pos[s[i] - 'a'] = i;
        int ans = 0;
        for (int i = 1; i < (int)p.size(); i++)
            ans += abs(pos[p[i] - 'a'] - pos[p[i - 1] - 'a']);
        cout << ans << '\n';
    }
    return 0;
}