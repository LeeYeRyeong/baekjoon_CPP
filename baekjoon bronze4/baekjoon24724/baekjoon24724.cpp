#include <iostream>
using namespace std;

int main()
{
	int t, n, a, b, u, v;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n >> a >> b;
		for (int j = 0; j < n; j++) cin >> u >> v;
		cout << "Material Management " << i + 1 << "\nClassification ---- End!\n";
	}

	return 0;
}