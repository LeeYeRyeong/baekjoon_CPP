#include <iostream>
using namespace std;

int main()
{
    int n, num, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num - 1 != i) count++;
    }
    cout << count;

    return 0;
}