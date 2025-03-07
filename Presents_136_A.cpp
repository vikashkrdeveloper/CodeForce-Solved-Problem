#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num_friends;
    cin >> num_friends;
    vector<int> gift_givers(num_friends);
    vector<int> gift_receivers(num_friends);
    for (int i = 0; i < num_friends; ++i)
    {
        cin >> gift_givers[i];
    }
    for (int i = 0; i < num_friends; ++i)
    {
        gift_receivers[gift_givers[i] - 1] = i + 1;
    }
    for (int i = 0; i < num_friends; ++i)
    {
        cout << gift_receivers[i] << " ";
    }
    cout << endl;
    return 0;
}
