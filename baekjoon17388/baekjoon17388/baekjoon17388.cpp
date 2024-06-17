#include <iostream>
#include <string>
using namespace std;

int main()
{
	string msg = "OK";
	int s, k, h;
	cin >> s >> k >> h;
	if (s + k + h < 100) {
		msg = ((s < k ? s : k) < h ? (s < k ? "Soongsil" : "Korea") : "Hanyang");
	}
	cout << msg << endl;

	return 0;
}