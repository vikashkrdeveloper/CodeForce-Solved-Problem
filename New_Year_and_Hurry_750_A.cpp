#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int timeLeft = 240 - k;
    int i = 1;
    while (timeLeft >= 5 * i && i <= n)
    {
        timeLeft -= 5 * i;
        i++;
    }
    cout << i - 1 << endl;
    return 0;
}
