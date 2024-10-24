#include <bits/stdc++.h>
using namespace std;
// March-Rain

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int cases;
    cin >> cases;
    while (cases--)
    {
        int holeNum, limit;
        cin >> holeNum >> limit;
        int holes[holeNum];
        for (int i = 0; i < holeNum; i++)
        {
            cin >> holes[i];
        }
        int left = 0, right = holes[holeNum - 1], mid;
        while (left <= right)
        {
            mid = (left + right) / 2;
            int strips = 1;
            int stripLen = holes[0];
            for (int i = 1; i < holeNum; i++)
            {
                if (holes[i] >= stripLen + mid)
                {
                    strips++;
                    stripLen = holes[i];
                }
            }
            if (strips <= limit)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        cout << left << "\n";
    }
    return 0;
}