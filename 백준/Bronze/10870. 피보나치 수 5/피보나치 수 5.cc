#include <iostream>
using namespace std;

int fibo(int n);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cout << fibo(n);

    return 0;
}

int fibo(int n) {
    
    // 1. 초기값 설정
    int arr[21];
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 1;

    // 2. 점화식 설정
    for (int i = 3; i <= n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    // 3. n번지 배열의 값을 리턴
    return arr[n];
}