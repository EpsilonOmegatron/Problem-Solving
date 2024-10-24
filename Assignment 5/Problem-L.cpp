#include <bits/stdc++.h>
using namespace std;
// Pouring-Water

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int getTarget(int capA, int capB, int target)
{
    int steps = 1;
    int currentA = capA;
    int currentB = 0;

    while (currentA != target && currentB != target)
    {
        int capacity = min(capB - currentB, currentA);
        currentA -= capacity;
        currentB += capacity;
        steps++;
        if (currentA == target || currentB == target)
        {
            break;
        }
        if (currentA == 0)
        {
            currentA = capA;
            steps++;
        }
        if (currentB == capB)
        {
            currentB = 0;
            steps++;
        }
    }
    return steps;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int cases;
    cin >> cases;
    while (cases--)
    {
        int capA, capB, target;
        cin >> capA >> capB >> target;
        if (target > capA && target > capB)
        {
            cout << "-1\n";
        }
        else if (capA == target || capB == target)
        {
            cout << "1\n";
        }
        else if (target % gcd(capA, capB) != 0)
        {
            cout << "-1\n";
        }
        else
        {
            int minSteps = min(getTarget(capA, capB, target), getTarget(capB, capA, target));
            cout << minSteps << endl;
        }
    }
    return 0;
}
