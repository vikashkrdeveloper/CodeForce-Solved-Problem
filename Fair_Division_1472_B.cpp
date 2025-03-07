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

        vector<int> candies(n);
        int count_1 = 0, count_2 = 0;

        for (int i = 0; i < n; ++i)
        {
            cin >> candies[i];
            if (candies[i] == 1)
            {
                count_1++;
            }
            else
            {
                count_2++;
            }
        }

        int total_weight = count_1 + 2 * count_2;
        if (total_weight % 2 != 0)
        {
            cout << "NO\n";
        }
        else
        {
            int half_weight = total_weight / 2;

            int max_two_candies = half_weight / 2;
            if (count_2 >= max_two_candies)
            {
                int remaining_weight = half_weight - max_two_candies * 2;
                if (remaining_weight <= count_1)
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
            else
            {
                int remaining_weight = half_weight - count_2 * 2;
                if (remaining_weight <= count_1)
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
        }
    }

    return 0;
}
