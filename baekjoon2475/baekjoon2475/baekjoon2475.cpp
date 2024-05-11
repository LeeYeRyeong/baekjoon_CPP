#include <iostream>
using namespace std;

int main()
{
    int n[5];
    int sum = 0;
    for (int i = 0; i < 5; i++) cin >> n[i];
    for (int i = 0; i < 5; i++) sum += (n[i] * n[i]);

    cout << sum % 10 << endl;

    return 0;
}