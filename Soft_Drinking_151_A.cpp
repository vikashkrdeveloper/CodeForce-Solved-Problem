#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int total_drink = k * l;
    int total_slices = c * d;
    int total_salt = p;
    int max_toasts_drink = total_drink / (n * nl);
    int max_toasts_limes = total_slices / n;
    int max_toasts_salt = total_salt / (n * np);
    int result = min({max_toasts_drink, max_toasts_limes, max_toasts_salt});
    cout << result << endl;

    return 0;
}
