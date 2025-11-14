#include <iostream>
using namespace std;

int main()
{
	int n, m, in, out, current, result;
	bool check = true;
	cin >> n >> m;
	current = m, result = m;
	for (int i = 0; i < n; i++) {
		cin >> in >> out;
		current = current + in - out;
		if (current > result) result = current;
		else if (current < 0) check = false;
	}
	cout << (check ? result : 0);

	return 0;
}