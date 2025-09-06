#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        vector<int> a;
        int l = 0, r = n - 1;
        while (l <= r)
        {
            a.push_back(b[l++]);
            if (l <= r)
            {
                a.push_back(b[r--]);
            }
        }

        for (int x : a)
            cout << x << " ";
        cout << "\n";
    }

    return 0;
}