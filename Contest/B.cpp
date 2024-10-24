#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int gifts, budget, gift, sum = 0, amount = 0;
    cin >> gifts >> budget;
    multiset<int> store;
    for (int i = 0; i < gifts; i++)
    {
        cin >> gift;
        store.insert(gift);
    }
    for (auto i : store)
    {
        sum += i;
        if (sum <= budget)
        {
            amount++;
        }
        else
            break;
    }
    cout << amount;
    return 0;
}
