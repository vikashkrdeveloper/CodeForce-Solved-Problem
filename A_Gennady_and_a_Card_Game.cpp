#include <bits/stdc++.h>
using namespace std;

int main()
{
    string tableCard;
    cin >> tableCard;

    vector<string> handCards(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> handCards[i];
    }

    for (const string &card : handCards)
    {
        if (card[0] == tableCard[0] || card[1] == tableCard[1])
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
