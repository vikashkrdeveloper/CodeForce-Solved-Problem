#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a[100], i, j, k, l, m, x, y, z, sum = 0;
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (i = 0; i < n - 1; i++)
        {
            if (a[i + 1] - a[i] > 1)
            {
                cout << "NO" << endl;
                sum = 1;
                break;
            }
        }
        if (sum == 0)
        {
            cout << "YES" << endl;
        }
    }
return 0;
}
