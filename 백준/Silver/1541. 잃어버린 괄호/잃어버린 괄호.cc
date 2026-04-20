#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int add = 0;
    int sub = 0;

    string tmp;
    string num;

    bool is_minus = false;

    for (auto c : s) {
        if (c >= '0' && c <= '9') {
            tmp += c;
        }
        else {
            for (int i = 0; i < tmp.size(); i++) {
                if (tmp[i] == '0') num = tmp.substr(i + 1);
                else break;
            }

            if (is_minus) sub += stoi(tmp);
            else add += stoi(tmp);
            tmp.clear();

            if (c == '-')  is_minus = true;
        }
    }

    for (int i = 0; i < tmp.size(); i++) {
        if (tmp[i] == '0') num = tmp.substr(i + 1);
        else break;
    }

    if (is_minus) sub += stoi(tmp);
    else add += stoi(tmp);
    tmp.clear();
    
    cout << add - sub;

    return 0;
}