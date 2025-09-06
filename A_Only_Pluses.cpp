#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        vector<int> v = {a, b, c};
        sort(v.begin(), v.end());
        for (int i = 0; i < 5; i++)
        {
            v[0]++;
            sort(v.begin(), v.end());
        }
        cout << v[0] * v[1] * v[2] << "\n";
    }
    return 0;
}
