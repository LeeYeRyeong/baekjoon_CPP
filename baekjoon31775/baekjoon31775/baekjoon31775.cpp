#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	cout << ((s1[0] == 'l' && s2[0] == 'k' && s3[0] == 'p') || (s1[0] == 'l' && s2[0] == 'p' && s3[0] == 'k') ||
		(s1[0] == 'k' && s2[0] == 'l' && s3[0] == 'p') || (s1[0] == 'k' && s2[0] == 'p' && s3[0] == 'l') ||
		(s1[0] == 'p' && s2[0] == 'k' && s3[0] == 'l') || (s1[0] == 'p' && s2[0] == 'l' && s3[0] == 'k') ? "GLOBAL" : "PONIX");

	return 0;
}