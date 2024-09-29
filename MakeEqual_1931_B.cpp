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
        vector<long long> a(n);
        long long total_water = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            total_water += a[i];
        }
        long long target = total_water / n;
        long long balance = 0;
        bool possible = true;
        for (int i = 0; i < n; ++i)
        {
            balance += a[i] - target;
            if (balance < 0)
            {
                possible = false;
                break;
            }
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
    return 0;
}
