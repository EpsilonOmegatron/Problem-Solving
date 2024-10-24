#include <bits/stdc++.h>
using namespace std;
#define int2 long long
// Range-Sum

int main()
{
    int2 size, input, queries, query;
    cin >> size;
    int2 arr[size];
    vector<int2> rprefix;
    rprefix.push_back(0);
    for (int2 i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    reverse(arr, arr + size);
    for (int2 i = 1; i <= size; i++)
    {
        if (i == 1)
        {
            rprefix.push_back(arr[i - 1]);
        }
        else
        {
            rprefix.push_back(rprefix[i - 1] + arr[i - 1]);
        }
    }

    cin >> queries;
    for (int2 i = 0; i < queries; i++)
    {
        cin >> query;
        if (query == 1)
        {
            int2 l, r;
            cin >> l >> r;
            int2 realSize = rprefix.size() - 1;
            cout << rprefix[realSize - l + 1] - rprefix[realSize - r] << "\n";
        }
        else if (query == 2)
        {
            cin >> input;
            rprefix.push_back(*rprefix.rbegin() + input);
        }
    }
    return 0;
}