#include <bits/stdc++.h>
using namespace std;

int main()
{
    // step 1: input username
    string username;
    cin >> username;
    int length = username.length();

    // step 2: find unique characters in the username string using a set data structure (no duplicates)
    set<char> uniqueCharacters;
    for (int i = 0; i < length; i++)
    {
        uniqueCharacters.insert(username[i]);
    }

    // step 3: check if the number of unique characters is even or odd
    if (uniqueCharacters.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}
