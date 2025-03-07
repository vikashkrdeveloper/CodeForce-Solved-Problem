#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<bool> isPrime(m + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= m; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= m; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    int nextPrime = n + 1;
    while (!isPrime[nextPrime])
    {
        nextPrime++;
    }
    if (nextPrime == m)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
