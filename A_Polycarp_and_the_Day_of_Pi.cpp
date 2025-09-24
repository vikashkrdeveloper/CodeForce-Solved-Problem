#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string pi = "31415926535897932384626433832795"; // first 30 digits

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int ans = 0;
        for (int i = 0; i < (int)s.size(); i++)
        {
            if (s[i] == pi[i])
                ans++;
            else
                break;
        }
        cout << ans << "\n";
    }
    return 0;
}
