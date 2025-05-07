#include <iostream>
using namespace std;

int main()
{
    int x, y, w, h, min = 1000;
    cin >> x >> y >> w >> h;
    if (min > x) min = x;
    if (min > y) min = y;
    if (min > (w > x ? w - x : x - w)) min = (w > x ? w - x : x - w);
    if (min > (h > y ? h - y : y - h)) min = (h > y ? h - y : y - h);
    cout << min;

    return 0;
}