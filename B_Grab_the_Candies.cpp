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
        sort(a.begin(), a.end(), greater<int>());
        int mihai = 0, bianca = 0;
        bool possible = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                mihai += a[i];
            }
            else
            {
                bianca += a[i];
            }
            if (bianca >= mihai)
            {
                possible = false;
                break;
            }
        }
        if (possible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}