#include <bits/stdc++.h>
using namespace std;

bool canPaintAll(const vector<long long> &a, long long k)
{
    int n = a.size();
    long long extraCell = -1;
    int i = 0;

    while (i < n)
    {
        if (i + 1 < n && a[i + 1] - a[i] <= k)
        {
            i += 2;
        }
        else
        {
            if (extraCell == -1)
            {
                extraCell = a[i] - k;
                i++;
            }
            else
            {
                if (abs(extraCell - a[i]) <= k)
                {
                    i++;
                }
                else
                {
                    return false;
                }
            }
        }
    }

    return true;
}

long long minK(const vector<long long> &a)
{
    long long left = 1;
    long long right = (a.back() - a.front()) + 1;

    while (left < right)
    {
        long long mid = left + (right - left) / 2;
        if (canPaintAll(a, mid))
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }
    return left;
}

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << minK(a) << endl;
    }
    return 0;
}
