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

        sort(a.begin(), a.end());
        // Check number of distinct elements
        int distinct = unique(a.begin(), a.end()) - a.begin();

        if (distinct <= 2)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
