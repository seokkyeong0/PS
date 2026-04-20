#include <iostream>
using namespace std;

int fibo_dp(int n);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
    
    cout << fibo_dp(n) <<  ' ' << n - 2;
 
    return 0;
}

int fibo_dp(int n) {
    int memo[41];
    memo[0] = 0;
    memo[1] = 1;
    memo[2] = 1;
    for (int i = 3; i <= n; i++) {
        memo[i] = memo[i - 1] + memo[i - 2];
    }
    return memo[n];
}