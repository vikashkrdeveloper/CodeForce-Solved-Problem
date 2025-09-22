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
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<long long> b = a;
        sort(b.begin(), b.end());
        long long max1 = b[n - 1];
        long long max2 = b[n - 2];
        for (int i = 0; i < n; i++)
        {
            if (a[i] == max1)
            {
                cout << a[i] - max2 << " ";
            }
            else
            {
                cout << a[i] - max1 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}