#include <iostream>
using namespace std;

int main()
{
	int sampleTC, systemTC, s, a;
	bool systemCheck = true, sampleCheck = true;
	cin >> sampleTC >> systemTC;
	for (int i = 0; i < sampleTC; i++) {
		cin >> s >> a;
		if (s != a) sampleCheck = false;
	}
	for (int i = 0; i < systemTC; i++) {
		cin >> s >> a;
		if (s != a) systemCheck = false;
	}
	if (sampleCheck && systemCheck) cout << "Accepted";
	else if (!sampleCheck) cout << "Wrong Answer";
	else if (!systemCheck) cout << "Why Wrong!!!";

	return 0;
}