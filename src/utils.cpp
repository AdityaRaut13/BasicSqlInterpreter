
#include "../header/utils.h"
#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> tokenize(std::string s, std::string del)
{
	int start = 0;
	int end = s.find(del);
	std::vector<std::string> result;

	while (end != -1)
	{
		if (start != end)
			result.push_back(s.substr(start, end - start));

		start = end + del.size();
		end = s.find(del, start);
	}

	result.push_back(s.substr(start, end - start));
	return result;
}

void fatal(const char *error)
{
	std::cout << "[ERROR]:" << error << "\n";
	exit(0);
}
