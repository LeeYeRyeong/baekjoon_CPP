#include <iostream>
using namespace std;

int main()
{
    int r1[4], r2[4];
    int s, x, y;
    for (int i = 0; i < 4; i++) cin >> r1[i];
    for (int i = 0; i < 4; i++) cin >> r2[i];
    x = (r1[2] > r2[2] ? r1[2] : r2[2]) - (r1[0] < r2[0] ? r1[0] : r2[0]);
    y = (r1[3] > r2[3] ? r1[3] : r2[3]) - (r1[1] < r2[1] ? r1[1] : r2[1]);
    s = (x > y ? x * x : y * y);
    cout << s;

    return 0;
}