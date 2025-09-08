#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v(3);
        cin >> v[0] >> v[1] >> v[2];
        sort(v.begin(), v.end());
        int median = v[1];
        int ans = abs(v[0] - median) + abs(v[1] - median) + abs(v[2] - median);
        cout << ans << "\n";
    }
    return 0;
}
