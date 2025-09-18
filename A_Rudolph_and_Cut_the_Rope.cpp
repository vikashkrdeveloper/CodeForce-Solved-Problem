#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first >> v[i].second;
        }

        // sort by nail height (a[i])
        sort(v.begin(), v.end());

        int ans = n; // worst case cut all
        for (int i = 0; i < n; i++)
        {
            int a = v[i].first, b = v[i].second;

            // If this rope can reach ground
            if (a - b <= 0)
            {
                // Ropes below this need to be cut (i ropes)
                ans = min(ans, i);
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
