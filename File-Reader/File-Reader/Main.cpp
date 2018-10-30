#include <iostream>
#include <fstream>
#include <string>

/// <summary>
/// The purpose of this program is to simply open a file
/// and read its contents.
/// </summary>

using namespace std;

int main()
{
	string fileLocation;

	cin >> fileLocation;

	ifstream ROT;

	float num;

	ROT.open(fileLocation.c_str());

	if (!(ROT.is_open()))
	{
		cout << "Could not open" << endl;
	}
	else
	{
		while (ROT >> num)
		{
			cout << num << endl;
		}
	}

	ROT.close();

	system("Pause");

	return 0;
}