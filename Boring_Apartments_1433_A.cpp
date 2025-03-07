#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int digit = x % 10;
        int total_keypresses = 0;
        for (int d = 1; d < digit; ++d)
        {
            total_keypresses += 10;
        }

        int count = 0;
        for (int i = 1; i <= digit; ++i)
        {
            count += i;
        }

        int num_length = 0;
        for (int i = 1; i <= x; i *= 10)
        {
            num_length++;
        }
        total_keypresses += count;
        total_keypresses += (digit * num_length);

        cout << total_keypresses << endl;
    }
    return 0;
}
