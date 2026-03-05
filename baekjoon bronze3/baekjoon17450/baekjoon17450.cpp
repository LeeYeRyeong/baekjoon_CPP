#include <iostream>
using namespace std;

int main()
{
	double s, n, u;
	int sPrice, sGram, nPrice, nGram, uPrice, uGram;
	cin >> sPrice >> sGram >> nPrice >> nGram >> uPrice >> uGram;
	s = ((sGram * 10) * 1.0) / ((sPrice * 10 >= 5000 ? sPrice * 10 - 500 : sPrice * 10) * 1.0);
	n = ((nGram * 10) * 1.0) / ((nPrice * 10 >= 5000 ? nPrice * 10 - 500 : nPrice * 10) * 1.0);
	u = ((uGram * 10) * 1.0) / ((uPrice * 10 >= 5000 ? uPrice * 10 - 500 : uPrice * 10) * 1.0);
	cout << ((s > n ? s : n) > u ? (s > n ? 'S' : 'N') : 'U');

	return 0;
}