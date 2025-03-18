#include <iostream>
using namespace std;

int main()
{
	long result, v, d, j, vk, jk, vd, jd;
	cin >> vk >> jk >> vd >> jd >> v >> d >> j;
	result = v * d * j * vk * jk + v * d * j * vd * jd;
	cout << result;

	return 0;
}