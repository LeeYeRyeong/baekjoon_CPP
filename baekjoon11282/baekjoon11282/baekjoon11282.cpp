#include <iostream>
#include <string>
using namespace std;

int main()
{
	// https://ddmanager.pe.kr/150
	int n;
	string s;
	cin >> n;
	n += 3071;
	s.push_back(n / (64 * 64) + 234);
	s.push_back(n / 64 % 64 + 128);
	s.push_back(n % 64 + 128);
	cout << s;

	return 0;
}