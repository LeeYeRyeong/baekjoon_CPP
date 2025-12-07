#include <iostream>
using namespace std;

int main()
{
    int n, count2 = 0, countE = 0;
    char c;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> c;
        if (c == '2') count2++;
        else if (c == 'e') countE++;
    }
    cout << (count2 == countE ? "yee" : (count2 > countE ? "2" : "e"));

    return 0;
}