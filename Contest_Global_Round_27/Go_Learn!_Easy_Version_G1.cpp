#include <bits/stdc++.h>

using namespace std;
const int MOD = 998244353;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<pair<int, int>> tests(m);
        for (int i = 0; i < m; ++i)
        {
            cin >> tests[i].first >> tests[i].second;
        }

        sort(tests.begin(), tests.end());
        unordered_map<int, int> index_to_value;
        unordered_map<int, int> value_to_index;

        int r = 0;
        for (const auto &test : tests)
        {
            int x = test.first;
            int k = test.second;

            if (index_to_value.count(x) && index_to_value[x] != k)
            {
                r++;
            }
            else if (value_to_index.count(k) && value_to_index[k] != x)
            {
                r++;
            }
            else
            {
                index_to_value[x] = k;
                value_to_index[k] = x;
            }
        }
        set<int> assigned_indices;
        set<int> assigned_values;
        for (const auto &test : tests)
        {
            assigned_indices.insert(test.first);
            assigned_values.insert(test.second);
        }
        int free_positions = n - assigned_indices.size();
        int free_values = n - assigned_values.size();

        int count_of_arrays = 1;
        for (int i = 0; i < free_positions; ++i)
        {
            count_of_arrays = (count_of_arrays * free_values--) % MOD;
        }

        cout << r << " " << count_of_arrays << "\n";
    }

    return 0;
}
