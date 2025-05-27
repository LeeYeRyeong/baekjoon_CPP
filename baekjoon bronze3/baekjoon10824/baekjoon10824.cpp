#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b, c, d, s1, s2;
    long long num1, num2;
    cin >> a >> b >> c >> d;
    s1 = a + b, s2 = c + d;
    num1 = stoll(s1), num2 = stoll(s2);
    cout << num1 + num2;

    return 0;
}
