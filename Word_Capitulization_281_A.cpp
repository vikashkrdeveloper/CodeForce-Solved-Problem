#include <bits/stdc++.h>
using namespace std;

int main()
{
    string wordInput;
    cin >> wordInput;
    if (wordInput[0] >= 'a' && wordInput[0] <= 'z')
    {
        wordInput[0] = toupper(wordInput[0]);
    }
    cout << wordInput << endl;
    return 0;
}
