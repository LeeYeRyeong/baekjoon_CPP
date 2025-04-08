#include <iostream>
using namespace std;

int main()
{
    int n, t, l, min = 200;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t >> l;
        if (min > t + l) min = t + l;
    }
    cout << min;

    return 0;
}