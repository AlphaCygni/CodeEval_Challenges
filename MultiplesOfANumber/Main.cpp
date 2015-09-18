#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

vector<int> getValues(string input, string delimiter)
{
	vector<int> output;
	size_t start = 0;
	size_t end = 0;

	while (start != string::npos && end != string::npos)
	{
		start = input.find_first_not_of(delimiter, end);

		if (start != string::npos)
		{
			end = input.find_first_of(delimiter, start);

			if (end != string::npos)
			{
				output.push_back(std::stoi(input.substr(start, end - start)));
			}
			else
			{
				output.push_back(std::stoi(input.substr(start)));
			}
		}
	}

	return output;
}

int main(int argc, char *argv[]) 
{
	ifstream stream(argv[1]);
	
	if (stream)
	{
		vector<int> values;
		int multiple = 0;
		string line;

		while (getline(stream, line))
		{
			values = getValues(line, ",");

			multiple = values[1];

			while (multiple < values[0])
			{
				multiple += values[1];
			}

			cout << multiple << endl;
		}
	}

	return 0;
}