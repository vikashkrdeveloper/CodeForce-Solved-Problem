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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int total_twos = 0;
        for (int x : a)
        {
            if (x == 2)
                total_twos++;
        }

        int prefix_twos = 0;
        int ans = -1;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == 2)
                prefix_twos++;
            int suffix_twos = total_twos - prefix_twos;
            if (prefix_twos == suffix_twos)
            {
                ans = i + 1;
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
