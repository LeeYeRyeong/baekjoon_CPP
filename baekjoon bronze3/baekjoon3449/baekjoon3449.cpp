#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1, s2;
	int n, hamming = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s1 >> s2;
		for (int j = 0; j < s1.size(); j++) {
			if (s1[j] != s2[j]) hamming++;
		}
		cout << "Hamming distance is " << hamming << ".\n";
		hamming = 0;
	}
	
	return 0;
}