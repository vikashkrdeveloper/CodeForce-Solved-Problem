#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    unordered_map<char, int> required_counts = {
        {'T', 1},
        {'i', 1},
        {'m', 1},
        {'u', 1},
        {'r', 1}};

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (n != 5)
        {
            cout << "NO" << endl;
            continue;
        }

        unordered_map<char, int> actual_counts;
        for (char c : s)
        {
            actual_counts[c]++;
        }

        bool is_valid = true;
        for (const auto &pair : required_counts)
        {
            if (actual_counts[pair.first] != pair.second)
            {
                is_valid = false;
                break;
            }
        }

        cout << (is_valid ? "YES" : "NO") << endl;
    }

    return 0;
}
