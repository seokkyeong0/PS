#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x, idx = 0;
    bool nope = false;

    vector<char> r;
    vector<int> v;
    stack<int> a;
    stack<int> b;

    // 1(First) ~ n(Last)으로 구성된 스택을 생성한다. 
    cin >> n;
    for (int i = n; i > 0; i--) {
        a.push(i);
    }

    // 수열 순서를 입력한다.
    for (int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    // 종료 조건 : 두 스택이 모두 비었을 때이다.
    // 최종 출력은 vector에 누적한 뒤 한번에 출력한다.
    while (!a.empty() || !b.empty()) {
        // 처음에 스택 b가 비어있으므로,
        // a의 top을 b로 push하고 a를 pop한다.
        if (b.empty()) {
            r.push_back('+');
            b.push(a.top());
            a.pop();
        }
        else {
            // b의 top이 수열의 idx번째의 값이 될 때 까지
            // 스택 a의 top을 꺼내어 b에 push한다.
            // 그리고 조건을 만족하면 b를 pop하고 idx를 증가시킨다.
            // 이를 while문의 종료 조건까지 반복한다.
            if (b.top() == v[idx]) {
                r.push_back('-');
                b.pop();
                idx++;
            }
            else {
                // 만약 스택 a에서 요소를 모두 꺼냈는데,
                // 이 else 구문이 실행되면 불가능한 조합이다.
                if (a.empty()) {
                    nope = true;
                    break;
                }
                else {
                    r.push_back('+');
                    b.push(a.top());
                    a.pop();
                }
            }
        }
    }

    if (nope) {
        cout << "NO";
    }
    else {
        for (auto c : r) {
            cout << c << '\n';
        }
    }

    return 0;
}