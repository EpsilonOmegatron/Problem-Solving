#include <bits/stdc++.h>
using namespace std;
// Diamonds

int main()
{
    int diamonds, pounds, finalValue = 0;
    cin >> diamonds >> pounds;
    int values[diamonds];
    for (int i = 0; i < diamonds; i++)
    {
        cin >> values[i];
    }

    int S = 0, E = 0, sum = 0;
    while (S < diamonds)
    {
        while (E < diamonds && sum + values[E] <= pounds)
        {
            sum += values[E];
            if (sum > finalValue)
            {
                finalValue = sum;
            }
            E++;
        }
        if (sum == pounds)
        {
            finalValue = sum;
            break;
        }
        sum -= values[S++];
    }
    cout << finalValue << endl;
    return 0;
}
