#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<int> v;
    
    int n;
    cin >> n;
    
    while (n--) {
        int i;
        cin >> i;
        v.push_back(i);
    }
    
    sort(v.begin(), v.end());
    
    for (auto i : v) {
        cout << i << '\n';
    }

    return 0;
}