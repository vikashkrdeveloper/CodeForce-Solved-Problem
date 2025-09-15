#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            int b;
            string s;
            cin >> b >> s;
            for (char c : s)
            {
                if (c == 'U')
                    a[i] = (a[i] + 9) % 10;
                else
                    a[i] = (a[i] + 1) % 10;
            }
        }
        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << "\n";
    }
    return 0;
}