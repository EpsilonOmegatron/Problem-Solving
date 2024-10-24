#include <bits/stdc++.h>
using namespace std;
// Hamburgers

vector<long long> ingredientfreq(3, 0);
vector<long long> stock(3, 0);
vector<long long> shop(3, 0);
long long rubles;

bool Check(long long burgers)
{
    long long tempMoney = rubles;
    for (int i = 0; i < 3; i++)
    {
        long long need = stock[i] - (burgers * ingredientfreq[i]);
        if (need < 0)
        {
            if (abs(need) * shop[i] > tempMoney)
            {

                return false;
            }
            tempMoney -= abs(need) * shop[i];
        }
    }
    return true;
}

long long BS()
{
    long long l = 0, r = 1e13, mid;
    while (l < r)
    {
        mid = (l + r) / 2;
        if (Check(mid))
            l = mid + 1;
        else
            r = mid;
    }
    return l;
}

int main()
{
    string recipe;
    cin >> recipe;
    for (int i = 0; i < recipe.size(); ++i)
    {
        if (recipe[i] == 'B')
        {
            ingredientfreq[0]++;
        }
        if (recipe[i] == 'S')
        {
            ingredientfreq[1]++;
        }
        if (recipe[i] == 'C')
        {

            ingredientfreq[2]++;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> stock[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> shop[i];
    }
    cin >> rubles;

    cout << BS() - 1;
    return 0;
}