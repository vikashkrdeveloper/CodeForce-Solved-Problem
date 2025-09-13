#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    if (!(cin >> t))
        return 0;
    while (t--)
    {
        int n, m, l, r;
        cin >> n >> m >> l >> r;
        int start = max(l, r - m); // safe; r - m >= l is guaranteed because n >= m, but max is harmless
        int end = start + m;
        cout << start << " " << end << "\n";
    }
    return 0;
}
