#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    int positions[3] = {x1, x2, x3};
    sort(positions, positions + 3);
    int total_distance = (positions[2] - positions[1]) + (positions[1] - positions[0]);
    cout << total_distance << endl;
    return 0;
}
