#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long w, h, n;
        cin >> w >> h >> n;

        long long pieces = 1;

        while (w % 2 == 0)
        {
            w /= 2;
            pieces *= 2;
        }

        while (h % 2 == 0)
        {
            h /= 2;
            pieces *= 2;
        }

        if (pieces >= n)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
