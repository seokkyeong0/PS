#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    // 1. Map에 Key(string), Value(int) 쌍으로 각 단어 횟수 카운팅
    map<string, int> x;
    while (n--) {
        string s;
        cin >> s;
        if (s.size() >= m) {
            if (x[s])
                x[s]++;
            else
                x[s] = 1;
        }
    }

    // 2. Map -> Vector 변환
    vector<pair<string, int>> v(x.begin(), x.end());

    // 3. 우선순위(cmp 함수)에 따른 정렬
    sort(v.begin(), v.end(), cmp);

    // 4. string 요소 최종 출력
    for (auto p : v) {
        cout << p.first << '\n';
    }

    return 0;
}

bool cmp(pair<string, int> a, pair<string, int> b) {
    if (a.second != b.second) {
        return a.second > b.second;
    }
    else if (a.first.size() != b.first.size()) {
        return a.first.size() > b.first.size();
    }
    else {
        return a.first < b.first;
    }
}