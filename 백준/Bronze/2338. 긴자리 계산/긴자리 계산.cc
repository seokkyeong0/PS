#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string big_add(string a, string b);
string big_sub(string a, string b);
string big_mul(string a, string b);
void r_logic(string a, string b);

bool is_minus = false;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin >> a >> b;
    r_logic(a, b);

    return 0;
}

string big_add(string a, string b) {
    string result;
    int carry = 0;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int n = max(a.size(), b.size());

    for (int i = 0; i < n || carry; i++) {
        int sum = carry;
        if (i < a.size()) sum += a[i] - '0';
        if (i < b.size()) sum += b[i] - '0';
        result += (sum % 10) + '0';
        carry = sum / 10;
    }

    reverse(result.begin(), result.end());
    return result;
}

string big_sub(string a, string b) {
    string tmp;
    int carry = 0;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    for (int i = 0; i < a.size(); i++) {
        int sub = carry;
        if (i < a.size()) sub += a[i] - '0';
        if (i < b.size()) sub -= b[i] - '0';
        if (sub >= 0) {
            tmp += (sub % 10) + '0';
            carry = 0;
        }
        else {
            tmp += (10 + sub) % 10 + '0';
            carry = -1;
        }
    }

    if (carry < 0) is_minus = true;
    else is_minus = false;

    reverse(tmp.begin(), tmp.end());

    string result;
    bool z_skip = false;
    for (auto c : tmp) {
        if (z_skip) result += c;
        if (c != '0' && !z_skip) {
            z_skip = true;
            result += c;
        }
    }

    return result;
}

string big_mul(string a, string b) {
    vector<string> box;
    int carry = 0;
    int idx = 0;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    for (int i = 0; i < b.size(); i++) {
        string tmp;
        for (int i = 0; i < idx; i++) tmp += '0';
        for (int j = 0; j < a.size(); j++) {
            int mul = carry;
            mul += (b[i] - '0') * (a[j] - '0');
            carry = mul / 10;
            tmp += (mul % 10) + '0';
        }
        if (carry > 0) tmp += carry + '0';
        carry = 0;

        reverse(tmp.begin(), tmp.end());
        box.push_back(tmp);
        idx += 1;
    }

    string result = box[0];
    if (box.size() > 1) {
        result = big_add(box[0], box[1]);
        for (int i = 2; i < box.size(); i++) {
            result = big_add(result, box[i]);
        }
        return result;
    }
    else return result;
}

void r_logic(string a, string b) {
    if (a[0] == '-' && b[0] == '-') {
        a = a.substr(1);
        b = b.substr(1);
        cout << '-' << big_add(a, b) << '\n';
        if (a.size() < b.size()) {
            cout << big_sub(b, a) << '\n';
        }
        else {
            if (a == b) cout << 0 << '\n';
            else {
                string tmp = big_sub(a, b);
                if (is_minus) cout << big_sub(b, a) << '\n';
                else cout << '-' << big_sub(a, b) << '\n';
            }
        }
        if (a.size() < b.size()) cout << big_mul(b, a);
        else cout << big_mul(a, b);
    }
    else if (a[0] != '-' && b[0] == '-') {
        b = b.substr(1);
        if (a.size() > b.size()) {
            cout << big_sub(a, b) << '\n';
        }
        else {
            if (a == b) cout << 0 << '\n';
            else {
                string tmp = big_sub(a, b);
                if (is_minus) cout << '-' << big_sub(b, a) << '\n';
                else cout << big_sub(a, b) << '\n';
            }
        }
        cout << big_add(a, b) << '\n';
        if (a.size() < b.size()) cout << '-' << big_mul(b, a);
        else cout << '-' << big_mul(a, b);
    }
    else if (a[0] == '-' && b[0] != '-') {
        a = a.substr(1);
        if (a.size() < b.size()) {
            cout << big_sub(b, a) << '\n';
        }
        else {
            if (a == b) cout << 0 << '\n';
            else {
                string tmp = big_sub(b, a);
                if (is_minus) cout << '-' << big_sub(a, b) << '\n';
                else cout << big_sub(b, a) << '\n';
            }
        }
        cout << '-' << big_add(a, b) << '\n';
        if (a.size() < b.size()) cout << '-' << big_mul(b, a);
        else cout << '-' << big_mul(a, b);
    }
    else if (a[0] != '-' && b[0] != '-') {
        cout << big_add(a, b) << '\n';
        if (a.size() < b.size()) {
            cout << '-' << big_sub(b, a) << '\n';
        }
        else {
            if (a == b) cout << 0 << '\n';
            else {
                string tmp = big_sub(a, b);
                if (is_minus) cout << '-' << big_sub(b, a) << '\n';
                else cout << big_sub(a, b) << '\n';
            }
        }
        if (a == "0" || b == "0") cout << 0;
        else {
            if (a.size() < b.size()) cout << big_mul(b, a);
            else cout << big_mul(a, b);
        }
    }
}