#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        a.push_back(0);
        a.push_back(x);
        sort(a.begin(), a.end());
        int ans = 0;
        for (int i = 1; i < a.size(); i++)
        {
            if (i == a.size() - 1)
                ans = max(ans, 2 * (a[i] - a[i - 1]));
            else
                ans = max(ans, a[i] - a[i - 1]);
        }
        cout << ans << endl;
    }
    return 0;
}
