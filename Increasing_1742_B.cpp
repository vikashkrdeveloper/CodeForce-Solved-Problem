#include <iostream>
#include <vector>
#include <algorithm>
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

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        bool is_possible = true;
        for (int i = 1; i < n; ++i)
        {
            if (a[i] == a[i - 1])
            {
                is_possible = false;
                break;
            }
        }

        if (is_possible)
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
