#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int a, b, c, n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s >> a >> b >> c;
        cout << s << ' ' << a + b + c << ' ';
        if (a + b + c >= 55 && a > 10 && b > 7 && c >= 12) cout << "PASS\n";
        else cout << "FAIL\n";
    }

    return 0;
}
