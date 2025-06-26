#include <iostream>
#include <string>
using namespace std;

int mod_string(const string& p, int mod) {
    int result = 0;
    for (char ch : p) {
        result = (result * 10 + (ch - '0')) % mod;
    }
    return result;
}

int main()
{
    string p;
    int k, r = 0;
    bool check = true;
    cin >> p >> k;

    for (int i = 2; i < k; i++) {
        if (mod_string(p, i) == 0) {
            r = i;
            check = false;
            break;
        }
    }

    if (check) cout << "GOOD";
    else cout << "BAD " << r;

    return 0;
}
