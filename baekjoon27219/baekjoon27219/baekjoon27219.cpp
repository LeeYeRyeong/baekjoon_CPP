#include <iostream>
using namespace std;

int main()
{
	int n, countV, countI;
	cin >> n;
	countV = n / 5;
	countI = n % 5;
	for (int i = 0; i < countV; i++) cout << "V";
	for (int i = 0; i < countI; i++) cout << "I";
	
	return 0;
}