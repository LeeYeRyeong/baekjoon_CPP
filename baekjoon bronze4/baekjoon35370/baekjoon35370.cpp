#include <iostream>
using namespace std;

int main()
{
	int k, s, trip = 0;
	cin >> k >> s;
	trip = (s / k) + (s % k);
	cout << trip;

	return 0;
}