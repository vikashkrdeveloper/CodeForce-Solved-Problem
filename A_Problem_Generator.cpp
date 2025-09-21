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
        int n, m;
        cin >> n >> m;
        string a;
        cin >> a;

        vector<int> count(7, 0);
        for (char c : a)
        {
            count[c - 'A']++;
        }

        int need = 0;
        for (int i = 0; i < 7; i++)
        {
            if (count[i] < m)
            {
                need += (m - count[i]);
            }
        }

        cout << need << "\n";
    }
    return 0;
}
