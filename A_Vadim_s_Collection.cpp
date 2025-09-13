#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        // Requirement digits for each position
        vector<int> req = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

        // Count available digits
        vector<int> cnt(10, 0);
        for (char c : s)
            cnt[c - '0']++;

        string ans = "";
        for (int i = 0; i < 10; i++)
        {
            for (int d = req[i]; d <= 9; d++)
            {
                if (cnt[d] > 0)
                {
                    ans.push_back(char('0' + d));
                    cnt[d]--;
                    break;
                }
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
