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
        for (size_t i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int max_beautiful = 1;
        for (size_t i = 1; i < n; i++)
        {
            if (a[i] != a[i - 1])
            {
                max_beautiful++;
            }
        }
        cout << max_beautiful << endl;
    }
    return 0;
}
