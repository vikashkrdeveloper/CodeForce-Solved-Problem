#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int total = a + 2 * b;
        // The sum must be even to split into two equal parts with + and -
        if (total % 2 != 0) {
            cout << "NO\n";
            continue;
        }
        int half = total / 2;
        // We need to form 'half' using a number of 1's (a) and 2's (b)
        // Try to use as many 2's as possible
        int use2 = min(b, half / 2);
        int rem = half - use2 * 2;
        if (rem <= a) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
