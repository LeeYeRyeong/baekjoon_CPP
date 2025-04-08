#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int n;
    bool check = false;
    cin >> n >> s;
    for (int i = 0; i < n - 2; i++) {
        if (s[i] == 'o' && s[i + 1] == 'o' && s[i + 2] == 'o') {
            check = true;
            break;
        }
    }
    cout << (check ? "Yes" : "No");

    return 0;

}