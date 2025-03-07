#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y, w;
    cin >> y >> w;
    int max = y > w ? y : w;
    int numerator = 6 - max + 1;
    int denominator = 6;
    int gcd = __gcd(numerator, denominator);
    cout << numerator / gcd << "/" << denominator / gcd << endl;

    return 0;
}
