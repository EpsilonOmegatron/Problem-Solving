#include <bits/stdc++.h>
using namespace std;
// Password

string rule;
int NumWords;
string words[105];
string numbers[10] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

string outputs[300];

void PrintOut(int pass)
{
    if (pass == rule.size())
    {
        for (int i = 0; i < pass; ++i)
        {
            cout << outputs[i];
        }
        cout << '\n';
    }
    else
    {
        if (rule[pass] == '#')
        {
            for (int i = 0; i < NumWords; ++i)
            {
                outputs[pass] = words[i];
                PrintOut(pass + 1);
            }
        }
        else
        {
            for (int i = 0; i < 10; ++i)
            {
                outputs[pass] = numbers[i];
                PrintOut(pass + 1);
            }
        }
    }
}

int main()
{
    while (cin >> NumWords)
    {
        for (int i = 0; i < NumWords; ++i)
            cin >> words[i];
        cout << "--\n";
        int numRule;
        cin >> numRule;
        while (numRule--)
        {
            cin >> rule;
            PrintOut(0);
        }
    }
}