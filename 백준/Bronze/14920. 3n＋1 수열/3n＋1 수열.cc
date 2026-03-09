#include <iostream>
using namespace std;

int funct_3n1(int n);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    cout << funct_3n1(n);

    return 0;
}

int funct_3n1(int n) {
    int cnt = 1;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } 
        else {
            n = n * 3 + 1;    
        }
        cnt++;
    }
    return cnt;
}