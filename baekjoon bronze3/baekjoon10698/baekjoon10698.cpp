#include <iostream>
using namespace std;

int main()
{
	int t, a, b, answer, corretAnswer;
	char c, e;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a >> c >> b >> e >> answer;
		if (c == '+') corretAnswer = a + b;
		else if (c == '-') corretAnswer = a - b;
		cout << "Case " << i + 1 << ": " << (corretAnswer == answer ? "YES\n" : "NO\n");
	}

	return 0;
}