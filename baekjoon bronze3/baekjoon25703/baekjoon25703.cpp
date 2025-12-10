#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	cout << "int a;\nint *ptr = &a;\n";
	for (int i = 1; i < n; i++) {
		cout << "int ";
		for (int j = 0; j <= i; j++) cout << "*";
		cout << "ptr" << i + 1 << " = &ptr";
		if (i != 1) cout << i;
		cout << ";\n";
	}

	return 0;
}