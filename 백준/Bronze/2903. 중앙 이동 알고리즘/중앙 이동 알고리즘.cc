#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int result = 2;

    while (n--) {
        result = result * 2 - 1;
    }

    cout << result * result;

    return 0;
}