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
            cin >> a[i];
        int min_pos = min_element(a.begin(), a.end()) - a.begin();
        int max_pos = max_element(a.begin(), a.end()) - a.begin();
        if (min_pos > max_pos)
            swap(min_pos, max_pos);
        int ans = min(max_pos + 1, n - min_pos);
        ans = min(ans, min_pos + 1 + n - max_pos);
        cout << ans << "\n";
    }
    return 0;
}