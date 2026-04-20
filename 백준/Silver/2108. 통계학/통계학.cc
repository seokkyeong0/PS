#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int cnt[8001] = { 0 };

int my_round(double n);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double t;
    cin >> t;

    // 0. 입력
    vector<int> v;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        v.push_back(n);
    }

    // 1. 오름차순 정렬
    sort(v.begin(), v.end());

    // 2. 총합 및 숫자 횟수 카운팅
    double sum = 0;
    for (auto i : v) {
        sum += i;
        cnt[i + 4000]++;
    }

    // 3. 최빈값 횟수 찾기
    int m = 0;
    for (auto i : cnt) {
        if (m < i)
            m = i;
    }

    // 4. 최빈값 찾기
    vector<int> mode;
    for (int i = 0; i <= 8000; i++) {
        if (cnt[i] == m) {
            mode.push_back(i - 4000);
        }
    }

    // 5. 최빈값 오름차순 정렬
    sort(mode.begin(), mode.end());

    // 6. 최종 출력 (최빈값이 여러 개일 때 두 번째로 작은 값 출력)
    cout << my_round(sum / t) << '\n';
    cout << v[t / 2] << '\n';
    if (mode.size() > 1)
        cout << mode[1] << '\n';
    else
        cout << mode[0] << '\n';
    cout << v[v.size() - 1] - v[0];

    return 0;
}

// A. 반올림 함수 구현
int my_round(double n) {
    int r;
    if (n >= 0) {
        r = n + 0.5;
        return r;
    }
    else {
        r = n - 0.5;
        return r;
    }
}