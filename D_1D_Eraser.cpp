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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int ops = 0;
        for (int i = 0; i < n;)
        {
            if (s[i] == 'B')
            {
                ops++;
                i += k; // skip ahead after erasing k cells
            }
            else
            {
                i++;
            }
        }
        cout << ops << "\n";
    }
    return 0;
}
