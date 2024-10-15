#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int differentDays = min(a, b);
    a -= differentDays;
    b -= differentDays;
    int sameDays = (a / 2) + (b / 2);
    cout << differentDays << " " << sameDays << endl;

    return 0;
}
