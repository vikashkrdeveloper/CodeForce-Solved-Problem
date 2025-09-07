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
        int x;
        cin >> x;

        int ans = 9; // max digit
        while (x > 0)
        {
            ans = min(ans, x % 10);
            x /= 10;
        }

        cout << ans << "\n";
    }

    return 0;
}
