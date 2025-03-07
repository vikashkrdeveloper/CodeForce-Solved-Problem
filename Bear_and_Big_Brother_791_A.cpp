#include <bits/stdc++.h>
using namespace std;

int main()
{
    // step 1: input weights of Limak and Bob
    int limakWeight, bobWeight;
    cin >> limakWeight >> bobWeight;
    // step 2: simulate the growth of Limak and Bob until Limak's weight is greater than Bob's weight
    int years = 0;
    while (limakWeight <= bobWeight)
    {
        limakWeight *= 3;
        bobWeight *= 2;
        years++;
    }
    cout << years << endl;

    return 0;
}
