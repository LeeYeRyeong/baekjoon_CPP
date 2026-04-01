#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double h, w, bmi;
	int n, grade;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> h >> w;
		bmi = w / pow((h / 100), 2);
		if (h < 140.1) grade = 6;
		else if (h >= 140.1 && h < 146) grade = 5;
		else if (h >= 146 && h < 159) grade = 4;
		else if (h >= 159 && h < 161) {
			if (bmi >= 16.0 && bmi < 35.0) grade = 3;
			else if (bmi < 16.0 || bmi >= 35.0) grade = 4;
		}
		else if (h >= 161 && h < 204) {
			if (bmi >= 20.0 && bmi < 25.0) grade = 1;
			else if ((bmi >= 18.5 && bmi < 20.0) || (bmi >= 25.0 && bmi < 30.0)) grade = 2;
			else if ((bmi >= 16.0 && bmi < 30.0) || (bmi >= 30.0 && bmi < 35.0)) grade = 3;
			else if (bmi < 16.0 || bmi >= 35.0) grade = 4;
		}
		else if (h >= 204) grade = 4;
		cout << grade << '\n';
	}

	return 0;
}