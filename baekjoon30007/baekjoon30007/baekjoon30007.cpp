#include <iostream>
using namespace std;

int main()
{
	// 필요한 물의 양 = 라면 계수 * (끓일 라면 수 - 1) + 기본 물의 양
	// input : 라면계수 기본 물의 양 끓일 라면 수

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int count, water, noodle, need;
		cin >> noodle >> water >> count;
		cout << noodle * (count - 1) + water << endl;
	}

	return 0;
}