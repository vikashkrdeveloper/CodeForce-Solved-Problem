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
        string s;
        cin >> s;

        int count_1 = 0;
        for (char c : s)
            if (c == '1')
                count_1++;

        int total_1 = count_1 * (count_1 - 1) + (n - count_1) * (count_1 + 1);

        cout << total_1 << "\n";
    }
    return 0;
}
