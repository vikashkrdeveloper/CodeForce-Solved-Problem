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

        long long prod = 1;
        for (int i = 0; i < n; i++)
        {
            prod *= a[i];
        }
        long long max_prod = prod;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                long long new_prod = 1;
                for (int j = 0; j < n; j++)
                {
                    if (j == i)
                        new_prod *= (a[j] + 1);
                    else
                        new_prod *= a[j];
                }
                max_prod = max(max_prod, new_prod);
            }
            else
            {
                long long new_prod = prod / a[i] * (a[i] + 1);
                max_prod = max(max_prod, new_prod);
            }
        }
        cout << max_prod << endl;
    }

    return 0;
}
