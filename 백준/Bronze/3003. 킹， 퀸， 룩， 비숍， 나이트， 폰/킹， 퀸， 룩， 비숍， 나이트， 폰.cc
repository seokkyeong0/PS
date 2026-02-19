#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false); 
    
    int n;
    vector<int> v = {1, 1, 2, 2, 2, 8};

    for (int i = 0; i < 6; i++) {
        cin >> n;
        v[i] -= n;
    }

    for (auto i : v) {
        cout << i << ' ';
    }
    
    return 0;
}