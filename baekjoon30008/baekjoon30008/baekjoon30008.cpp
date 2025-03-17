#include <iostream>
using namespace std;

int main()
{
	int grade[16];
	int n, k, p, rank;
	cin >> n >> k;
	for (int i = 0; i < k; i++) {
		cin >> rank;
		p = rank * 100 / n;
		if (p <= 4) grade[i] = 1;
		else if (p <= 11) grade[i] = 2;
		else if (p <= 23) grade[i] = 3;
		else if (p <= 40) grade[i] = 4;
		else if (p <= 60) grade[i] = 5;
		else if (p <= 77) grade[i] = 6;
		else if (p <= 89) grade[i] = 7;
		else if (p <= 96) grade[i] = 8;
		else if (p <= 100) grade[i] = 9;
	}
	for (int i = 0; i < k; i++) cout << grade[i] << ' ';

	return 0;
}