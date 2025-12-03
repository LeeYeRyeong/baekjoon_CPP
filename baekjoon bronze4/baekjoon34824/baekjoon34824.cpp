#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	int n, rankY, rankK;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> name;
		if (name == "yonsei") rankY = i;
		else if (name == "korea") rankK = i;
	}
	cout << (rankY < rankK ? "Yonsei Won!" : "Yonsei Lost...");

	return 0;
}