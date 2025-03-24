#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s = "SciComLove", reverseS = "evoLmoCicS";
	int n;
	cin >> n;
	cout << (n % 2 == 0 ? s : reverseS);

	return 0;
}