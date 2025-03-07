#include <bits/stdc++.h>
using namespace std;

string find_smallest_number(int n)
{
    if (n == 1)
    {
        return "-1";
    }
    if (n == 2)
    {
        return "66";
    }
    if (n == 3)
    {
        return "-1";
    }
    string result;

    if (n % 2 == 0)
    {
        result = string(n - 2, '3') + "66";
    }
    else
    {
        result = string((n - 3) / 2, '3') + "366";
    }
    int sum_of_digits = 0;
    for (char ch : result)
    {
        sum_of_digits += (ch - '0');
    }

    if (sum_of_digits % 3 != 0)
    {
        return "-1";
    }
    int alternating_sum = 0;
    for (int i = 0; i < result.length(); ++i)
    {
        if (i % 2 == 0)
        {
            alternating_sum += (result[i] - '0');
        }
        else
        {
            alternating_sum -= (result[i] - '0');
        }
    }
    if (alternating_sum % 11 != 0)
    {
        return "-1";
    }
    return result;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << find_smallest_number(n) << endl;
    }
    return 0;
}
