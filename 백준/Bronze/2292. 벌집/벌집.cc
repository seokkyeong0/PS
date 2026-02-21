#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int w = 1;
    int layer = 1;

    while (n > w) {
        w += 6 * layer++;
    }

    cout << layer;

    return 0;
}