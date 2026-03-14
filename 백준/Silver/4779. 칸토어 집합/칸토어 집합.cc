#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// 인덱스 계산해서 가운데 비우기
// 좌, 우로 나누기

void cantore(string &s, int start, int len) {
    if (len == 1) return;
    int idx_l = len / 3;
    int idx_r = idx_l * 2;
    fill(s.begin() + start + idx_l, s.begin() + start + idx_r, ' ');
    cantore(s, start, idx_l); // 좌측
    cantore(s, start + idx_r, idx_l); // 우측
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        int n;
        cin >> n;
        if (cin.eof()) break;
        string s(pow(3, n), '-');
        cantore(s, 0, s.size());
        cout << s << '\n';
    }

    return 0;
}