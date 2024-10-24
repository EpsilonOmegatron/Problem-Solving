#include <bits/stdc++.h>
using namespace std;
// Sum-of-Pairwise-Products

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long nums, queries, l, r, sum;
    cin >> nums;
    long long prefix[nums], arr[nums];
    for (int i = 0; i < nums; i++)
    {
        cin >> arr[i];
        prefix[i] = prefix[i - 1] * bool(i) + arr[i];
    }
    cin >> queries;
    for (int i = 0; i < queries; i++)
    {
        cin >> l >> r;
        sum = 0;
        for (int i = l; i <= r; i++)
        {
            sum += arr[i] * (prefix[r] - prefix[i - 1] * bool(i));
        }
        cout << sum << endl;
    }

    return 0;
}