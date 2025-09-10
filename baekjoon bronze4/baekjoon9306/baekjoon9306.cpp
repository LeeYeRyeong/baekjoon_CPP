#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name, title;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> name >> title;
		cout << "Case " << i + 1 << ": " << title << ", " << name << '\n';
	}

	return 0;
}