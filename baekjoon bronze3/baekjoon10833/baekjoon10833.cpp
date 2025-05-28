#include <iostream>
using namespace std;

int main()
{
	int n, student, apple, count = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> student >> apple;
		count += (student > apple ? apple : apple % student);
	}
	cout << count;

	return 0;
}