#include <bits/stdc++.h>
using namespace std;
// Cumulative-Sum-Query

const int N = 1e6 + 1;
int A[N], prefix_sum[N];
int main()
{
    int n, q;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> A[i];
        prefix_sum[i] = A[i];
        if (i)
            prefix_sum[i] += prefix_sum[i - 1];
    }
    cin >> q;
    while (q--)
    {
        int l, r, sum;
        cin >> l >> r;
        sum = prefix_sum[r];
        if (l)
            sum -= prefix_sum[l - 1];
        cout << sum << "\n";
    }
}