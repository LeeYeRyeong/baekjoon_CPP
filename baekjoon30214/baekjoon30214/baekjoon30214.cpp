#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    cout << (m - n >= n ? "E" : "H") << endl;

    return 0;
}