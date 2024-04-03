#include <iostream>
using namespace std;

int main()
{
	string a;
	cin >> a;
	for (int i = 0; a[i] != NULL; i++) {
		if (a[i] >= 'a' && a[i] <= 'z') cout << static_cast<char>(a[i] - 32);
		else if (a[i] >= 'A' && a[i] <= 'Z') cout << static_cast<char>(a[i] + 32);
	}

	return 0;
}