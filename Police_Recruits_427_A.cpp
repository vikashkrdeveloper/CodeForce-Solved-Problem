#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, count = 0, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x > 0)
        {
            count += x;
        }
        else
        {
            if (count > 0)
            {
                count--;
            }
            else
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
