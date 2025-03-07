#include <iostream>
using namespace std;

int main()
{
	double weight, height, BMI = 0.0;
	cin >> weight >> height;
	BMI = weight / (height * height);
	if (BMI > 25) cout << "Overweight";
	else if (BMI >= 18.5) cout << "Normal weight";
	else cout << "Underweight";

	return 0;
}