#include <iostream>
#include <fstream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char *argv[]) 
{
	ifstream stream(argv[1]);

	if (stream)
	{
		string line;
		int i;
				
		while (getline(stream, line)) 
		{
			for (i = 0; i < line.size(); i++)
			{
				line[i] = tolower(line[i]);
			}

			cout << line << endl;
		}
	}
	
	return 0;
}