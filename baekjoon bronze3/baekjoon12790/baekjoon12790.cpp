#include <iostream>
using namespace std;

int main()
{
	int n, hp, mp, attack, defense, hpGauge, mpGauge, attackGauge, defenseGauge, total = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> hp >> mp >> attack >> defense >> hpGauge >> mpGauge >> attackGauge >> defenseGauge;
		total += (hp + hpGauge < 1 ? 1 : hp + hpGauge) + (mp + mpGauge < 1 ? 1 : mp + mpGauge) * 5 +
			(attack + attackGauge < 0 ? 0 : attack + attackGauge) * 2 + (defense + defenseGauge) * 2;
		cout << total << '\n';
		total = 0;
	}

	return 0;
}