#include <iostream>
using namespace std;

int main()
{
	int n, maxstrick = 0, strick = 0, problem;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> problem;
		if (problem == 0) {
			maxstrick = (maxstrick < strick ? strick : maxstrick);
			strick = 0;
		}
		else strick++;
	}
	maxstrick = (maxstrick < strick ? strick : maxstrick);
	cout << maxstrick;

	return 0;
}