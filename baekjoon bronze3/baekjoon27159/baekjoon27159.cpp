#include <iostream>
using namespace std;

int main()
{
	int card, num, sum = 0, pre;
	cin >> card >> num;
	sum += num;
	pre = num;
	for (int i = 0; i < card - 1; i++) {
		cin >> num;
		sum += (num - pre != 1 ? num : 0);
		pre = num;
	}
	cout << sum;

	return 0;
}