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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int count = 0;
        for (int i = 0; i <= n - k;)
        {
            if (a[i] == 0)
            {
                bool can_hike = true;
                for (int j = 0; j < k; j++)
                {
                    if (a[i + j] == 1)
                    {
                        can_hike = false;
                        break;
                    }
                }
                if (can_hike)
                {
                    count++;
                    i += k + 1; // Move to the day after the mandatory break
                }
                else
                {
                    i++;
                }
            }
            else
            {
                i++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}