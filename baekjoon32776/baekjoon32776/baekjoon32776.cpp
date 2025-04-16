#include <iostream>
using namespace std;

int main()
{
	int s_ab, m_a, f_ab, m_b;
	cin >> s_ab >> m_a >> f_ab >> m_b;
	cout << (s_ab <= 240 || (s_ab <= (m_a + f_ab + m_b)) ? "high speed rail" : "flight");

	return 0;
}