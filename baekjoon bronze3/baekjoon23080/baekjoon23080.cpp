#include <iostream>
#include <string>
using namespace std;

int main()
{
	string security, result = "";
	int n;
	cin >> n >> security;
	for (int i = 0; i < security.size(); i += n) result += security[i];
	cout << result;

	return 0;
}