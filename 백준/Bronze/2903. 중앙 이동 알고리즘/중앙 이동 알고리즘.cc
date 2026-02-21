#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int len = 1;
    int cnt = 4;
    int dup = 0;
    
    while (n--) {
        dup = len * 4 + 3;
        cnt = (cnt * 4) - dup;
        len *= 2;
    }

    cout << cnt;

    return 0;
}