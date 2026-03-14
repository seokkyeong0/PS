#include <iostream>
using namespace std;

// 0. 크기와, 좌표값 r, c를 인자로 받는다.
int z(int n, int r, int c) {
    // 7. 종료 조건
    if (n == 0) return 0;

    // 1. 사각형을 등분하는 기준점을 계산한다. (2^n-1)
    int h = 1 << (n - 1);

    // 2. (r, c)가 1번 사각형일 때는 방문한 사각형이 없음
    if (r < h && c < h) return z(n - 1, r, c);

    // 3. (r, c)가 2번 사각형일 때는 1번 사각형을 방문
    if (r < h && c >= h) return h * h + z(n - 1, r, c - h);

    // 4. (r, c)가 3번 사각형일 때는 1, 2번 사각형을 방문
    if (r >= h && c < h) return 2 * h * h + z(n - 1, r - h, c);

    // 5. (r, c)가 4번 사각형일 때는 1, 2, 3번 사각형을 방문
    return 3 * h * h + z(n - 1, r - h, c - h);

    // 6. 크기를 줄이고, 상대 좌표에 대해서 재귀 수행
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, r, c;
    cin >> n >> r >> c;
    cout << z(n, r, c);

    return 0;
}