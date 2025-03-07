#include <bits/stdc++.h>
using namespace std;

int main()
{
    string firstString, secondString;
    cin >> firstString >> secondString;
    int length = firstString.length();
    int result = 0;
    // convert to lowercase
    for (int i = 0; i < length; i++)
    {
        firstString[i] = tolower(firstString[i]);
        secondString[i] = tolower(secondString[i]);
    }
    // compare strings lexicographically (ASCII values) and return the result accordingly (-1, 0, 1)
    for (int i = 0; i < length; i++)
    {
        if (firstString[i] < secondString[i])
        {
            result = -1;
            break;
        }
        else if (firstString[i] > secondString[i])
        {
            result = 1;
            break;
        }
    }
    cout << result << endl;
    return 0;
}
