#include <iostream>
#include <string>
using namespace std;

int main()
{
	string my_mbti, other_mbti;
	int count = 0, n;
	cin >> my_mbti >> n;
	for (int i = 0; i < n; i++) {
		cin >> other_mbti;
		if (my_mbti == other_mbti) count++;
	}
	cout << count;

	return 0;
}