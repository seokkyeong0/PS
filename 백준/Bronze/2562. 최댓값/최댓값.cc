#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<int> v;

    for (int i = 0; i < 9; i++) {
        int n;
        cin >> n;
        v.push_back(n);
    }

    int max = 0;
    int idx = 0;

    for (int i = 0; i < 9; i++) {
        if (v[i] > max) {
            max = v[i];
            idx = i + 1;
        }
    }

    cout << max << '\n' << idx;

    return 0;
}