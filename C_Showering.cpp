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
        long long s, m;
        cin >> n >> s >> m;

        vector<pair<long long, long long>> tasks(n);
        for (int i = 0; i < n; i++)
        {
            cin >> tasks[i].first >> tasks[i].second;
        }

        bool can = false;

        // Check before the first task
        if (tasks[0].first >= s)
            can = true;

        // Check between tasks
        for (int i = 1; i < n; i++)
        {
            if (tasks[i].first - tasks[i - 1].second >= s)
            {
                can = true;
            }
        }

        // Check after the last task
        if (m - tasks[n - 1].second >= s)
            can = true;

        cout << (can ? "YES\n" : "NO\n");
    }
    return 0;
}
