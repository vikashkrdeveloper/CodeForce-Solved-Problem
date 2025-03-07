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
        vector<int> round_numbers;
        int place_value = 1;
        while (n > 0)
        {
            int current_digit = n % 10;
            if (current_digit != 0)
            {
                round_numbers.push_back(current_digit * place_value);
            }
            n /= 10;
            place_value *= 10;
        }
        cout << round_numbers.size() << " ";
        for (int round_number : round_numbers)
        {
            cout << round_number << " ";
        }
        cout << endl;
    }
    return 0;
}
