#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string word;
		int count;
		cin >> count >> word;
		for (int j = 0; j < word.size(); j++) {
			for (int k = 0; k < count; k++) {
				cout << word[j];
			}
		}
		cout << endl;
	}

	return 0;
}