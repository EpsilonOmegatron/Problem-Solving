#include <bits/stdc++.h>
using namespace std;
// Good-Group

int main()
{
    int num;
    cin >> num;
    int workers[num];
    for (int i = 0; i < num; i++)
    {
        cin >> workers[i];
    }
    sort(workers, workers + num);

    int S = 0, E = 1, count = 1, max = 1;
    while (E < num)
    {
        if (S == E)
        {
            E++;
            count++;
        }
        while (workers[E] - workers[S] <= 5 && E < num)
        {
            count++;
            if (max < count)
            {
                max = count;
            }
            E++;
        }
        count--;
        S++;
    }
    cout << max << endl;
    return 0;
}

// if (workers[i + 1] == workers[i])
//  {
//      count++;
//  }
//  if (workers[i + 1] - workers[i] < 5)
//  {
//      count++;
//      i++;
//      continue;
//  }