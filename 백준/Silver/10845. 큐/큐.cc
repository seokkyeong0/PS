#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    string s;
    queue<int> q;

    cin >> n;
    while (n--) {
        cin >> s;
        if (s == "push") {
            cin >> x;
            q.push(x);
        }
        else if (s == "pop") {
            if (q.empty())
                cout << -1 << '\n';
            else {
                cout << q.front() << '\n';
                q.pop();
            }
        }
        else if (s == "size") {
            cout << q.size() << '\n';
        }
        else if (s == "empty") {
            if (q.empty())
                cout << 1 << '\n';
            else {
                cout << 0 << '\n';
            }
        }
        else if (s == "front") {
            if (q.empty())
                cout << -1 << '\n';
            else {
                cout << q.front() << '\n';
            }
        }
        else if (s == "back") {
            if (q.empty())
                cout << -1 << '\n';
            else {
                cout << q.back() << '\n';
            }
        }
    }
    
    return 0;
}