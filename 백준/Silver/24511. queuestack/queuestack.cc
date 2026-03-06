#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 0. 변수 선언
    int n, a, b, m, c;
    int idx = 0;
    vector<int> ch;
    deque<int> dq;

    // 1. 자료구조 개수 입력
    cin >> n;

    // 2. 길이 n의 수열 a 입력
    for (int i = 0; i < n; i++) {
        cin >> a;
        ch.push_back(a);
    }

    // 3. 길이 n의 수열 b 입력
    for (int i = 0; i < n; i++) {
        cin >> b;
        if (ch[i] == 0) {
            dq.push_back(b);
        }
    }

    // 4. 삽입할 수열의 길이 m 입력
    cin >> m;

    for (int i = 0; i < m; i++) {
        // 5. 길이 m의 수열 c 입력
        cin >> c;

        // 6. deque이 비어있지 않다면
        // 앞에 원소 c를 넣고, 뒤를 출력한뒤 pop_back
        // 비어있다면 c를 그대로 출력
        if (!dq.empty()) {
            dq.push_front(c);
            cout << dq.back() << ' ';
            dq.pop_back();
        }
        else {
            cout << c << ' ';
        }

    }

    return 0;
}