#include <iostream>
using namespace std;

int main()
{
	int n, a, b, s, t, start, end;
	cin >> n >> a >> b >> s >> t;
	start = (s < t ? s : t);
	end = (s > t ? s : t);
	if (start >= a + 1 && end <= b - 1) cout << "City";
	else if ((start >= 1 && end <= a) || (start >= b && end <= n)) cout << "Outside";
	else cout << "Full";

	return 0;
}