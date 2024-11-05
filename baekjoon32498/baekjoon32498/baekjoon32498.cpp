#include <iostream>
using namespace std;

int main()
{
	int n, problem, count = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> problem;
		if (problem % 2 != 0) count++;
	}

	cout << count << endl;

	return 0;
}