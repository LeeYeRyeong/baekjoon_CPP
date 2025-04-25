#include <iostream>
using namespace std;

int main()
{
	long x;
	int t;
	//scanf_s("%d", &t);
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		//scanf_s("%d", &t);
		scanf("%ld", &x);
		printf("%ld\n", x * 2 - 1);
	}

	return 0;
}