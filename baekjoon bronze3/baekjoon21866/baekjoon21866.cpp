#include <iostream>
using namespace std;

int main()
{
	int total = 0, score;
	bool hacker = false;
	for (int i = 0; i < 9; i++) {
		cin >> score;
		if (score > ((i / 2 + 1) * 100)) hacker = true;
		total += score;
	}
	cout << (hacker ? "hacker" : total < 100 ? "none" : "draw");

	return 0;
}