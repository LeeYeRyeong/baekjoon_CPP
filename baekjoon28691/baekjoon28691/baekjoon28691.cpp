#include <iostream>
using namespace std;

int main()
{
	char c;
	cin >> c;

	if (c == 'M') cout << "MatKor" << endl;
	else if (c == 'W') cout << "WiCys" << endl;
	else if (c == 'C') cout << "CyKor" << endl;
	else if (c == 'A') cout << "AlKor" << endl;
	else if (c == '$') cout << "$clear" << endl;

	return 0;
}