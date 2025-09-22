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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            v[i] = i + 1;
        }
        if (n % 2 == 0)
        {
            for (int i = 0; i < n; i += 2)
            {
                swap(v[i], v[i + 1]);
            }
        }
        else
        {
            for (int i = 0; i < n - 3; i += 2)
            {
                swap(v[i], v[i + 1]);
            }
            swap(v[n - 1], v[n - 2]);
            swap(v[n - 2], v[n - 3]);
        }
        for (auto x : v)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}