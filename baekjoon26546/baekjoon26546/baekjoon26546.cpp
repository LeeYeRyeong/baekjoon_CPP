#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, start, finish;
	string msg;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> msg >> start >> finish;
		for (int j = 0; msg[j] != '\0'; j++) {
			if (j >= start && j < finish) continue;
			cout << msg[j];
		}
		cout << endl;
	}

	return 0;
}