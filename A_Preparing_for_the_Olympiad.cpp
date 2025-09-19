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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int max_diff = INT_MIN;
        int result = INT_MIN;
        for (int mask = 0; mask < (1 << n); mask++)
        {
            int m = 0, s = 0;
            vector<bool> train(n, false);
            for (int i = 0; i < n; i++)
            {
                if (mask & (1 << i))
                {
                    train[i] = true;
                    m += a[i];
                }
            }
            for (int i = 0; i < n - 1; i++)
            {
                if (train[i])
                {
                    s += b[i + 1];
                }
            }
            result = max(result, m - s);
        }
        cout << result << "\n";
    }
    return 0;
}