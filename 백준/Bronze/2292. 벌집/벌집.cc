#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int cnt = 1;
    int fst = 2;
    int lst = 8;
    int weight = 0;

    bool is_end = false;

    if (n > 1) {
        while (true) {
            for (int i = fst; i < lst; i++) {
                if (i == n) {
                    cnt++;
                    is_end = true;
                }
            }

            if (is_end)
                break;

            cnt++;
            weight += 6;
            fst += weight;
            lst += weight + 6;
        }
    }

    cout << cnt;

    return 0;
}