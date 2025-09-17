#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
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
        bool sorted = false;
        while (!sorted)
        {
            sorted = true;
            for (int i = 1; i < n - 1; i++)
            {
                if (a[i - 1] < a[i] && a[i] > a[i + 1])
                {
                    swap(a[i], a[i + 1]);
                    sorted = false;
                }
            }
        }
        bool ok = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}