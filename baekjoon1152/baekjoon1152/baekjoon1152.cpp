#include <iostream>
#include <string>
using namespace std;

int main()
{
	string sentence;
	int count = 0, pos = 0;
	getline(cin, sentence);
	if (sentence[0] == ' ') pos++;
	if (sentence[sentence.size() - 1] != ' ') sentence += ' ';
	while (sentence[pos] != '\0') {
		if (sentence[pos] == ' ') count++;
		pos++;
	}
	cout << count << endl;

	return 0;
}