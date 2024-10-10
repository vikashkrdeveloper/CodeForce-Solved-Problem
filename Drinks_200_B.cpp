#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num_drinks;
    cin >> num_drinks;
    vector<int> drink_volumes(num_drinks);
    for (int i = 0; i < num_drinks; ++i)
    {
        cin >> drink_volumes[i];
    }
    double total_volume = 0;
    for (int i = 0; i < num_drinks; ++i)
    {
        total_volume += drink_volumes[i];
    }
    cout << fixed << setprecision(12) << total_volume / num_drinks << endl;

    return 0;
}
