#include <iostream>
#include <string>
using namespace std;

int main()
{
	string Rick[7] = { "Never gonna give you up" ,"Never gonna let you down","Never gonna run around and desert you","Never gonna make you cry","Never gonna say goodbye","Never gonna tell a lie and hurt you","Never gonna stop" };
	string message;
	int check[100] = {};
	int n;

	cin >> n;
	cin.ignore();
	
	for (int i = 0; i < n; i++) {
		getline(cin, message);
		for (int j = 0; j < 7; j++) {
			if (message == Rick[j]) {
				check[i] = 1;
				break;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		if (check[i] == 0) {
			cout << "Yes" << endl;
			return 0;
		}
	}

	cout << "No" << endl;

	return 0;
}