#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int n, sum = 0, count = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		s = to_string(i);
		for (int j = 0; j < s.size(); j++) sum += static_cast<int>(s[j]) - 48;
		if (i % sum == 0) count++;
		sum = 0;
	}
	cout << count;

	return 0;
}