#include <iostream>
using namespace std;

int main()
{
	int n, inch;
	bool check = true;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> inch;
		if (inch < 48) check = false;
	}
	cout << (check ? "True" : "False");

	return 0;
}