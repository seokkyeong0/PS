#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, x;
    cin >> n >> m;

    int curr = 1;
    int dest = n;

    vector<int> v;
    v.push_back(0);
    while (n--) {
        cin >> x;
        v.push_back(x);
    }

    vector<int> b;
    b.push_back(0);
    while (m--) {
        cin >> x;
        b.push_back(x);
    }

    int cnt = 0;
    int idx = 1;
    while (curr < dest) {
        curr += b[idx++];
        if (curr >= dest) {
            cnt++;
            break;
        }
        else {
            curr += v[curr];
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}