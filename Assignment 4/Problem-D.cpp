#include <bits/stdc++.h>
using namespace std;
// 23 out of 5

bool is23recursive(int input[], int i, int result)
{
    if (i == 5)
    {
        return result == 23;
    }
    return is23recursive(input, i + 1, result + input[i]) || is23recursive(input, i + 1, result - input[i]) || is23recursive(input, i + 1, result * input[i]);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int inputs[5];
    while (true)
    {
        int zeroes = 0;
        bool is23 = false;
        for (int i = 0; i < 5; i++)
        {
            cin >> inputs[i];
            if (inputs[i] == 0)
            {
                zeroes++;
            }
        }
        if (zeroes == 5)
        {
            break;
        }
        sort(inputs, inputs + 5);

        do
        {
            is23 = is23recursive(inputs, 1, inputs[0]);
            if (is23)
            {
                break;
            }
        } while (next_permutation(inputs, inputs + 5));

        if (is23)
        {
            cout << "Possible\n";
        }
        else
        {
            cout << "Impossible\n";
        }
    }

    return 0;
}
