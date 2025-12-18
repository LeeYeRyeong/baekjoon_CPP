#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int n;
	bool check = false;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (s == "anj") check = true;
	}
	cout << (check ? "뭐야;" : "뭐야?");

	return 0;
}