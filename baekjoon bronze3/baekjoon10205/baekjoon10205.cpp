#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int n, head;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> head >> s;
		for (int j = 0; j < s.size(); j++) {
			if (s[j] == 'c') head++;
			else if (s[j] == 'b') head--;
		}
		cout << "Data Set " << i + 1 << ":\n" << (head > 0 ? head : 0) << "\n\n";
	}

	return 0;
}