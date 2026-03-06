#include <iostream>
#include <cmath>
#include <deque>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, x;
    cin >> n;
    
    deque<pair<int, int>> dq;
    
    for (int i = 1; i <= n; i++) {
        cin >> x;
        dq.push_back({x, i});
    }
    
    int mv_cnt = dq.front().first;
    
    cout << dq.front().second << ' ';
    dq.pop_front();
    
    while (!dq.empty()) {
        if (mv_cnt > 0) {
            for (int i = 0; i < mv_cnt - 1; i++) {
                dq.push_back(dq.front());
                dq.pop_front();
            }
            cout << dq.front().second << ' ';
            mv_cnt = dq.front().first;
            dq.pop_front();
        }
        else {
            for (int i = 0; i < abs(mv_cnt) - 1; i++) {
                dq.push_front(dq.back());
                dq.pop_back();
            }
            cout << dq.back().second << ' ';
            mv_cnt = dq.back().first;
            dq.pop_back();
        }
    }

    return 0;
}