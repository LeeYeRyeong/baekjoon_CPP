#include <iostream>
using namespace std;

int main()
{
	char c;
	cin >> c;
	cout << (c == 'n' || c == 'N' ? "Naver D2" : "Naver Whale") << endl;
	return 0;
}