#include <iostream>
using namespace std;

void hanoi(int n, int from, int temp, int to) {
    // Base Condition : 원반이 1개면 그냥 옮기면 끝
    if (n == 1) {
        cout << from << ' ' << to << '\n';
        return;
    }

    // 1. n-1개를 보조 기둥으로 치운다. (목적지 temp)
    hanoi(n - 1, from, to, temp);

    // 2. 가장 큰 원반을 목적지로 옮긴다.
    cout << from << ' ' << to << '\n';

    // 3. 치워뒀던 n-1개를 다시 목적지로 가져온다. (목적지 to)
    hanoi(n - 1, temp, from, to);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cout << (1 << n) - 1 << '\n';
    hanoi(n, 1, 2, 3);

    return 0;
}