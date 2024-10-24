#include <bits/stdc++.h>
using namespace std;
// A-Tale-Of-Two-Lands

int main()
{
    int n;
    cin >> n;
    long long int point;
    vector<long long int> points;
    for (int i = 0; i < n; i++)
    {
        cin >> point;
        points.push_back(abs(point));
    }
    sort(points.begin(), points.end());
    
    long long int count = 0;
    for (int i = 0; i < n; i++)
    {
        point = upper_bound(points.begin(), points.end(), points[i] * 2) - points.begin();
        point--;
        count += abs(i - point);
    }
    cout << count;
    return 0;
}

// int main()
// {
//     int size;
//     cin >> size;
//     int points[size];
//     for (int i = 0; i < size; i++)
//     {
//         cin >> points[i];
//     }
//     sort(points, points + size, greater<int>());

//     int l = 0, r = 1, valids = 0;
//     while (l < size)
//     {
//         if (abs(points[l] - points[r]) <= abs(points[l]) && abs(points[l] + points[r]) >= abs(points[r]))
//         {
//             valids++;
//             r++;
//         }
//         else
//         {
//             l++;
//             if (r == l)
//             {
//                 r++;
//             }
//         }
//     }
//     cout << valids;
//     return 0;
// }
