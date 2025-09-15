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
        string s;
        cin >> s;
        string r = s;
        bool found = false;
        sort(r.begin(), r.end());
        if (r == s) {
            // Try next_permutation to find a different arrangement
            if (next_permutation(r.begin(), r.end())) {
                cout << "YES\n";
                cout << r << "\n";
            } else {
                cout << "NO\n";
            }
        } else {
            cout << "YES\n";
            cout << r << "\n";
        }
    }
    return 0;
}