#include <iostream>
using namespace std;

int main()
{
	int n = 1, tmp = 1;
	int arr[100] = {};
	while (1) {
		cin >> n;
		if (n == 0) break;
		for (int i = 0; i < n; i++) cin >> arr[i];
		cout << "Case " << tmp++ << ": Sorting... done!" << endl;
	}
	return 0;
}