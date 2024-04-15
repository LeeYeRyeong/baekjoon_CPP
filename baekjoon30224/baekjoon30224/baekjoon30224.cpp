#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	string s;
	int result = -1, n = 0, flag = 0;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '7') flag = 1;
		n += (static_cast<int>(s[i]) - 48) * pow(10, s.size() - i - 1);
	}
	if (n % 7 == 0 && flag == 1) result = 3;
	else if (n % 7 == 0 && flag != 1) result = 1;
	else if (n % 7 != 0 && flag == 1) result = 2;
	else result = 0;

	cout << result << endl;

	return 0;
}