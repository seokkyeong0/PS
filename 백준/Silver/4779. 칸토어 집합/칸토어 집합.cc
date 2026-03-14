#include <iostream>
#include <cmath>
using namespace std;

// 1. 길이가 3^n인 문자열이 주어지고, 가운데를 공백으로 한다.
// 2. 각 문자열을 3등분하고, 가운데 문자열을 공백으로 한다.
// 3. 길이가 1이 될 때 까지 반복한다.

// 인덱스 계산해서 가운데 비우기
// 좌, 우로 나누기

string s;
void cantore(int start, int len) {
    if (len == 1) return;
    int idx_l = len / 3;
    int idx_r = idx_l * 2;
    for (int i = start + idx_l; i < start + idx_r; i++) {
        s[i] = ' ';
    }
    cantore(start, idx_l); // 좌측
    cantore(start + idx_r, idx_l); // 우측
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        int n;
        cin >> n;
        if (cin.eof()) break;

        for (int i = 0; i < pow(3, n); i++) {
            s += '-';
        }

        cantore(0, s.size());
        cout << s << '\n';
        s.clear();
    }

    return 0;
}