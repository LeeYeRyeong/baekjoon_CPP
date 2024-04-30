#include <iostream>
using namespace std;

int main()
{
	string s; 
	string name[4] = { "North London Collegiate School","Branksome Hall Asia","Korea International School","St. Johnsbury Academy" };
	cin >> s;
	if (s == "NLCS") cout << name[0] << endl;
	else if (s == "BHA") cout << name[1] << endl;
	else if (s == "KIS") cout << name[2] << endl;
	else if (s == "SJA") cout << name[3] << endl;

	return 0;
}