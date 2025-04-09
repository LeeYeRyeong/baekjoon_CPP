#include <iostream>
using namespace std;

int main()
{
	int mouse, min = 500, count = 0;
	for (int i = 0; i < 4; i++) {
		cin >> mouse;
		count += mouse;
		if (min > mouse) min = mouse;
	}
	count -= (min - 1);
	cout << count;

	return 0;
}