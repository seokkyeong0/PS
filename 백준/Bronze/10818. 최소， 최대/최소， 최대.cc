#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    vector<int> v;

    while (n--) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int min = v[0];
    int max = v[0];

    for (int i = 0; i < v.size(); i++) {
        if (v[i] < min)
            min = v[i];
        if (v[i] > max)
            max = v[i];
    }

    cout << min << ' ' << max;

    return 0;
}