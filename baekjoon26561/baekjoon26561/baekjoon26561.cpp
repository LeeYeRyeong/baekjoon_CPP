#include <iostream>
using namespace std;

int main()
{
	long people, time;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> people >> time;
		cout << people - (time / 7) + (time / 4) << '\n';
	}

	return 0;
}