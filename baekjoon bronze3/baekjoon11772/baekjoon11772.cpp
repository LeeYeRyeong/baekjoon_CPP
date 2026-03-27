#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	string s;
	long sum = 0;
	int n, top, bottom;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		//cout << "substr : " << s.substr(0, s.size() - 1) << '\n';
		bottom = s[s.size() - 1] - '0';
		top = stoi(s.substr(0, s.size() - 1));
		sum += pow(top, bottom);
	}
	cout << sum;

	return 0;
}