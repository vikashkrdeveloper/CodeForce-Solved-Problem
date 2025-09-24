#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = 0;
    for (int i = 0; i < n;)
    {
        if (s[i] == 'x')
        {
            int j = i;
            while (j < n && s[j] == 'x')
            {
                j++;
            }
            int len = j - i;
            if (len >= 3)
            {
                ans += (len - 2);
            }
            i = j;
        }
        else
        {
            i++;
        }
    }

    cout << ans << "\n";
    return 0;
}
