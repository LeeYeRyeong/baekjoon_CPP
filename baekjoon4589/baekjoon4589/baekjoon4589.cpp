#include <iostream>
using namespace std;

int main()
{
	int length[3] = {};
	int n;
	cin >> n;
	cout << "Gnomes: \n";
	for (int i = 0; i < n; i++) {
		cin >> length[0] >> length[1] >> length[2];
		if ((length[0] < length[1] && length[1] < length[2]) || (length[0] > length[1] && length[1] > length[2])) cout << "Ordered\n";
		else cout << "Unordered\n";
	}
	return 0;
}