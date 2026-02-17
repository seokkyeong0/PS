#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v;

    while (n--) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    int x;
    cin >> x;

    int cnt = 0;

    for (auto i : v)
        if (i == x)
            cnt++;

    cout << cnt;

    return 0;
}