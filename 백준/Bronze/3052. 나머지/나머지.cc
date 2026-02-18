#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x[42] = { 0 };

    for (int i = 0; i < 10; i++) {
        int n;
        cin >> n;
        x[n % 42]++;
    }

    int cnt = 0;

    for (auto i : x) {
        if (i > 0)
            cnt++;
    }

    cout << cnt;
    
    return 0;
}