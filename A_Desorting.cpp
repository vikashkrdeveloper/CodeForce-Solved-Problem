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
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // Check if already not sorted
        bool sorted = true;
        for (int i = 1; i < n; i++)
        {
            if (a[i] < a[i - 1])
            {
                sorted = false;
                break;
            }
        }
        if (!sorted)
        {
            cout << 0 << "\n";
            continue;
        }

        // Array is sorted -> calculate min operations
        int mindiff = INT_MAX;
        for (int i = 1; i < n; i++)
        {
            mindiff = min(mindiff, a[i] - a[i - 1]);
        }

        cout << (mindiff / 2 + 1) << "\n";
    }
    return 0;
}
