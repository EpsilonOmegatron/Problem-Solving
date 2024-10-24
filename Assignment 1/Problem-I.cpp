#include <bits/stdc++.h>
// Dictionary-Making

int main()
{
    std::string input;
    std::set<std::string> dictionary;

    while (std::cin >> input)
    {
        std::string lowerWord = "";
        int length = input.length();

        for (int i = 0; i < length; ++i)
        {
            char c = tolower(input[i]);
            if (c <= 'z' and c >= 'a')
                lowerWord += c;

            else if (lowerWord != "")
            {
                dictionary.insert(lowerWord);
                lowerWord = "";
            }
        }

        if (lowerWord != "")
            dictionary.insert(lowerWord);
    }

    for (auto i : dictionary)
        std::cout << i << "\n";

    return 0;
}