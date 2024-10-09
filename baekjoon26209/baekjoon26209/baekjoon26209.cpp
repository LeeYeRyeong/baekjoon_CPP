#include <iostream>
#include <string>
using namespace std;

int main()
{
    string result;
    int n;
    for (int i = 0; i < 8; i++) {
        cin >> n;
        if (n == 9) {
            cout << "F" << endl;
            return 0;
        }
    }
    cout << "S" << endl;
    return 0;
}