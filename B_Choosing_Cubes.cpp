#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, f, k;
        cin >> n >> f >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int fav = a[f - 1];
        int more = 0, same = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > fav)
            {
                more++;
            }
            else if (a[i] == fav)
            {
                same++;
            }
        }
        if (more >= k)
        {
            cout << "NO\n";
        }
        else if (more + same <= k)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "MAYBE\n";
        }
    }

    return 0;
}