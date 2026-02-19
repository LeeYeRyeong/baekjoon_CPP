#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// 1. 문자열 크기 비교 (절댓값 비교)
// a < b 이면 true, 아니면 false
bool isLess(string a, string b) {
    if (a.length() != b.length()) return a.length() < b.length();
    return a < b;
}

// 2. 큰 수 뺄셈 (a - b, 단 a >= b 가정)
string subtract(string a, string b) {
    string res = "";
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int borrow = 0;
    for (int i = 0; i < a.length(); i++) {
        int sub = (a[i] - '0') - borrow - (i < b.length() ? b[i] - '0' : 0);
        if (sub < 0) {
            sub += 10;
            borrow = 1;
        }
        else borrow = 0;
        res += (sub + '0');
    }
    while (res.length() > 1 && res.back() == '0') res.pop_back();
    reverse(res.begin(), res.end());
    return res;
}

// 3. 큰 수 덧셈 (몫 보정용)
string add(string a, string b) {
    string res = "";
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int carry = 0;
    int len = max(a.length(), b.length());
    for (int i = 0; i < len || carry; i++) {
        int val = carry + (i < a.length() ? a[i] - '0' : 0) + (i < b.length() ? b[i] - '0' : 0);
        res += (val % 10 + '0');
        carry = val / 10;
    }
    reverse(res.begin(), res.end());
    return res;
}

// 4. 큰 수 나눗셈 (절댓값 기준 몫과 나머지 반환)
pair<string, string> divide(string a, string b) {
    if (isLess(a, b)) return { "0", a };

    string quotient = "", remainder = "";
    for (int i = 0; i < a.length(); i++) {
        remainder += a[i];
        while (remainder.length() > 1 && remainder[0] == '0') remainder.erase(0, 1);

        int cnt = 0;
        while (!isLess(remainder, b)) {
            remainder = subtract(remainder, b);
            cnt++;
        }
        quotient += (cnt + '0');
    }
    while (quotient.length() > 1 && quotient[0] == '0') quotient.erase(0, 1);
    return { quotient, remainder };
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string A, B;
    cin >> A >> B;

    bool negA = (A[0] == '-');
    bool negB = (B[0] == '-');

    string absA = negA ? A.substr(1) : A;
    string absB = negB ? B.substr(1) : B;

    // 절댓값 기준 몫(Q)과 나머지(R) 계산
    pair<string, string> res = divide(absA, absB);
    string Q = res.first;
    string R = res.second;

    string finalQ, finalR;

    // 부호 및 나머지 조건 (0 <= r < |B|) 처리
    if (!negA && !negB) { // A(+), B(+)
        finalQ = Q;
        finalR = R;
    }
    else if (!negA && negB) { // A(+), B(-)
        finalQ = (Q == "0" ? "0" : "-" + Q);
        finalR = R;
    }
    else if (negA && !negB) { // A(-), B(+)
        if (R == "0") {
            finalQ = "-" + Q;
            finalR = "0";
        }
        else {
            finalQ = "-" + add(Q, "1");
            finalR = subtract(absB, R);
        }
    }
    else { // A(-), B(-)
        if (R == "0") {
            finalQ = Q;
            finalR = "0";
        }
        else {
            finalQ = add(Q, "1");
            finalR = subtract(absB, R);
        }
    }

    cout << finalQ << "\n" << finalR << endl;

    return 0;
}