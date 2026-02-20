#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int pay = 1000 - n;
    int cnt = 0;

    cnt += pay / 500; pay %= 500;
    cnt += pay / 100; pay %= 100;
    cnt += pay / 50;  pay %= 50;
    cnt += pay / 10;  pay %= 10;
    cnt += pay / 5;   pay %= 5;
    cnt += pay / 1; 

    cout << cnt;

    return 0;
}