#include <bits/stdc++.h>
using namespace std;

int main()
{
    string word, translated;
    cin >> word >> translated;

    int n = word.length();
    // Reverse the translated string
    for (int i = 0; i < n / 2; i++)
    {
        char temp = translated[i];
        translated[i] = translated[n - i - 1];
        translated[n - i - 1] = temp;
    }

    // Check if the translated string is equal to the original string
    if (word == translated)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
