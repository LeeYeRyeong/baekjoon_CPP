#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a, b, c, n, m, k, max = 0;
	cin >> n >> m >> k >> a >> b >> c;
	if (n * a > max) max = n * a;
	if (m * b > max) max = m * b;
	if (k * c > max) max = k * c;
	if (max == n * a) cout << "Joffrey ";
	if (max == m * b) cout << "Robb ";
	if (max == k * c) cout << "Stannis ";
	
	return 0;
}