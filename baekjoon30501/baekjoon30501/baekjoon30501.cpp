#include <iostream>
using namespace std;

int main()
{
	int n;
	string name, criminal;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> name;
		for (int j = 0; name[j] != '\0'; j++) {
			if (name[j] == 'S') {
				criminal = name;
				break;
			}
		}
	}
	cout << criminal << endl;
	
	return 0;
}