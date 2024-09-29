#include <bits/stdc++.h>
using namespace std;

int main()
{
    // defing the variable n of type long long and taking input from the user and storing it in n variable
    long long n;
    cin >> n;
    // defining the variable count_lucky_digits of type int and initializing it with 0 value
    int count_lucky_digits = 0;
    // while loop to check the condition if n is greater than 0 then it will execute the loop
    while (n > 0)
    {
        int digit = n % 10;
        if (digit == 4 || digit == 7)
        {
            count_lucky_digits++;
        }
        n /= 10;
    }

    bool is_lucky = true;
    if (count_lucky_digits == 0)
    {
        is_lucky = false;
    }
    else
    {
        int temp = count_lucky_digits;
        while (temp > 0)
        {
            int digit = temp % 10;
            if (digit != 4 && digit != 7)
            {
                is_lucky = false;
                break;
            }
            temp /= 10;
        }
    }

    if (is_lucky)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
