#include <iostream>
using namespace std;

int main()
{
	int num[4] = {};
	bool check = false;
	for (int i = 0; i < 4; i++) cin >> num[i];
	if ((num[0] == 8 || num[0] == 9) && (num[1] == num[2]) && (num[3] == 8 || num[3] == 9)) check = true;
	
	cout << (check ? "ignore" : "answer");

	return 0;
}