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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int mn = *min_element(a.begin(), a.end());
        vector<int> b, c;

        for (int x : a)
        {
            if (x == mn)
                b.push_back(x);
            else
                c.push_back(x);
        }

        if (c.empty())
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << b.size() << " " << c.size() << "\n";
            for (int x : b)
                cout << x << " ";
            cout << "\n";
            for (int x : c)
                cout << x << " ";
            cout << "\n";
        }
    }
    return 0;
}
