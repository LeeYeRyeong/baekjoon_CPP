#include <iostream>
#include <string>
using namespace std;

int main()
{
	string word;
	int n, count = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> word;
		for (int j = 0; j < word.size(); j++) {
			if (word[j] == 'a' || word[j] == 'e' || word[j] == 'i' || word[j] == 'o' || word[j] == 'u') count++;
		}
		cout << "The number of vowels in " << word << " is " << count << ".\n";
		count = 0;
	}

	return 0;
}