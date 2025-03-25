#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int n, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (s == "Poblano") sum += 1500;
		else if (s == "Mirasol") sum += 6000;
		else if (s == "Serrano") sum += 15500;
		else if (s == "Cayenne") sum += 40000;
		else if (s == "Thai") sum += 75000;
		else if (s == "Habanero") sum += 125000;
	}
	cout << sum;

	return 0;
}