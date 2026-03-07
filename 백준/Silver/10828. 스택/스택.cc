#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    string s;
    stack<int> st;

    cin >> n;
    while (n--) {
        cin >> s;
        if (s == "push") {
            cin >> x;
            st.push(x);
        }
        else if (s == "pop") {
            if (st.empty())
                cout << -1 << '\n';
            else {
                cout << st.top() << '\n';
                st.pop();
            }
        }
        else if (s == "size") {
            cout << st.size() << '\n';
        }
        else if (s == "empty") {
            if (st.empty())
                cout << 1 << '\n';
            else {
                cout << 0 << '\n';
            }
        }
        else if (s == "top") {
            if (st.empty())
                cout << -1 << '\n';
            else {
                cout << st.top() << '\n';
            }
        }
    }
    
    return 0;
}