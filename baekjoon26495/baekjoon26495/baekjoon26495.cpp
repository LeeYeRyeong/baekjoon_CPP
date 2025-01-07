#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '0') cout << "0000" << endl << "0  0" << endl << "0  0" << endl << "0  0" << endl << "0000" << endl;
		else if (s[i] == '1') cout << "   1" << endl << "   1" << endl << "   1" << endl << "   1" << endl << "   1" << endl;
		else if (s[i] == '2') cout << "2222" << endl << "   2" << endl << "2222" << endl << "2" << endl << "2222" << endl;
		else if (s[i] == '3') cout << "3333" << endl << "   3" << endl << "3333" << endl << "   3" << endl << "3333" << endl;
		else if (s[i] == '4') cout << "4  4" << endl << "4  4" << endl << "4444" << endl << "   4" << endl << "   4" << endl;
		else if (s[i] == '5') cout << "5555" << endl << "5" << endl << "5555" << endl << "   5" << endl << "5555" << endl;
		else if (s[i] == '6') cout << "6666" << endl << "6" << endl << "6666" << endl << "6  6" << endl << "6666" << endl;
		else if (s[i] == '7') cout << "7777" << endl << "   7" << endl << "   7" << endl << "   7" << endl << "   7" << endl;
		else if (s[i] == '8') cout << "8888" << endl << "8  8" << endl << "8888" << endl << "8  8" << endl << "8888" << endl;
		else if (s[i] == '9') cout << "9999" << endl << "9  9" << endl << "9999" << endl << "   9" << endl << "   9" << endl;
		cout << endl;
	}
	return 0;
}