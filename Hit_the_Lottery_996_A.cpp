#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    int denominations[] = {100, 20, 10, 5, 1};
    int billCount = 0;
    for (int i = 0; i < 5; ++i)
    {
        if (n == 0)
            break;
        billCount += n / denominations[i];
        n %= denominations[i];
    }

    cout << billCount << endl;
    return 0;
}
