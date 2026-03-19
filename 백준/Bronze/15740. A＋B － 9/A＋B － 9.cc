#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int compare(string a, string b) {
    if (a.length() != b.length()) return a.length() > b.length() ? 1 : -1;
    if (a == b) return 0;
    return a > b ? 1 : -1;
}

string add(string a, string b) {
    string res = "";
    int i = a.length() - 1, j = b.length() - 1, carry = 0;
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry + (i >= 0 ? a[i--] - '0' : 0) + (j >= 0 ? b[j--] - '0' : 0);
        res += (sum % 10) + '0';
        carry = sum / 10;
    }
    reverse(res.begin(), res.end());
    return res;
}

string subtract(string a, string b) {
    string res = "";
    int i = a.length() - 1, j = b.length() - 1, borrow = 0;
    while (i >= 0) {
        int sub = (a[i--] - '0') - (j >= 0 ? b[j--] - '0' : 0) - borrow;
        if (sub < 0) { sub += 10; borrow = 1; }
        else borrow = 0;
        res += sub + '0';
    }
    while (res.length() > 1 && res.back() == '0') res.pop_back();
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string A, B;
    cin >> A >> B;

    bool negA = (A[0] == '-'), negB = (B[0] == '-');
    if (negA) A = A.substr(1);
    if (negB) B = B.substr(1);

    if (negA == negB) {
        if (negA) cout << "-";
        cout << add(A, B);
    }
    else {
        int cmp = compare(A, B);
        if (cmp == 0) cout << 0;
        else if (cmp > 0) {
            if (negA) cout << "-";
            cout << subtract(A, B);
        }
        else {
            if (negB) cout << "-";
            cout << subtract(B, A);
        }
    }

    return 0;
}