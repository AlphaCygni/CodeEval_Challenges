#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) 
{
	ifstream stream(argv[1]);

	if (stream)
	{		
		string line;
		int i, sum;

		while (getline(stream, line))
		{
			sum = 0;
			
			for (i = 0; i < line.size(); i++)
			{
				sum += std::stoi(line.substr(i, 1));
			}

			cout << sum << endl;
		}
	}

	return 0;
}