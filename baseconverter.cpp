#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;
using std::stoi;
#include <algorithm>
using std::reverse;

int main(int argc, const char *argv[])
{
	char base_chars [] = {'0', '1', '2', '3',
						  '4', '5', '6', '7',
						  '8', '9', 'A', 'B',
						  'C', 'D', 'E', 'F',
						  'G', 'H', 'I', 'J',
						  'K', 'L', 'M', 'N',
						  'O', 'P', 'Q', 'R',
						  'S', 'T', 'U', 'V',
						  'W', 'X', 'Y', 'Z'};

	if (argc > 2) {
		auto m = stoi(argv[1]);
		auto b = stoi(argv[2]);
		string newBase = "";

		while(m > 0) {
			newBase += base_chars[m % b];
			m = m / b;
		}

		reverse(newBase.begin(), newBase.end());
		cout << newBase << endl;
	}
	else {
		cout << "Usage: " << argv[0] << " <integer> <base>" << endl;
	}

	return 0;
}