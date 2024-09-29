#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        int firstFriend, secondFriend, thirdFriend;
        cin >> firstFriend >> secondFriend >> thirdFriend;
        if (firstFriend + secondFriend + thirdFriend >= 2)
        {
            total++;
        }
    }
    cout << total << endl;
    return 0;
}
