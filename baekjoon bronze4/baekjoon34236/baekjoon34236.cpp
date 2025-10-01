#include <iostream>
using namespace std;

int main()
{
    int n, preYear, year, d;
    cin >> n;
    cin >> preYear >> year;
    d = year - preYear;
    for (int i = 2; i < n; i++) {
        cin >> year;
    }
    cout << year + d;

    return 0;
}