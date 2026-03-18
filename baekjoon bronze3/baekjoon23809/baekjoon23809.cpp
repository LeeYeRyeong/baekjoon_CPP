#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n * 5; j++) {
			if (j < n || j >= n * (5 - 1)) cout << '@';
			else cout << ' ';
		}
		cout << '\n';
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n * 4; j++) {
			if (j < n || (j >= n * (4 - 1))) cout << '@';
			else cout << ' ';
		}
		cout << '\n';
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n * 3; j++) {
			cout << '@';
		}
		cout << '\n';
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n * 4; j++) {
			if (j < n || (j >= n * (4 - 1))) cout << '@';
			else cout << ' ';
		}
		cout << '\n';
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n * 5; j++) {
			if (j < n || j >= n * (5 - 1)) cout << '@';
			else cout << ' ';
		}
		cout << '\n';
	}

	return 0;
}