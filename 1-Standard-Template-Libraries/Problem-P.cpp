#include <bits/stdc++.h>
// Counting-Wood

int main()
{
	int testCases;
	std::cin >> testCases;
	std::cin.ignore(); std::cin.ignore();
	while (testCases--)
	{
		std::string name;
		int total = 0;
		std::map<std::string, int> trees;

		while (std::getline(std::cin, name) && name.length())
		{
			total++;
			if (trees.find(name) != trees.end())
			{
				trees.find(name)->second++;
			}
			else
				trees.insert({name, 1});
		}

		for (auto i : trees)
			std::cout << i.first << " " << std::fixed << std::setprecision(4) << 100.0 * ((double)i.second / total) << std::endl;

		if (testCases)
			std::cout << std::endl;
	}
	return 0;
}