#include <iostream>
#include <string>
using namespace std;

int main()
{
	string pre[1000], matter, forgot;
	bool check[1000] = {};
	int n;
	cin >> n;
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	for (int i = 0; i < n; i++) {
		cin >> pre[i];
		check[i] = false;
	}
	for (int i = 0; i < n - 1; i++) {
		cin >> matter;
		for (int j = 0; j < n; j++) {
			if (matter == pre[j]) {
				check[j] = true;
				break;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		if (check[i] == false) {
			forgot = pre[i];
			break;
		}
	}
	cout << forgot;

	return 0;
}