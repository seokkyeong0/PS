#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, p;
    cin >> n >> p;

    vector<int> v;

    while (n--) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    int max = 0;

    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.size(); j++) {
            for (int k = 0; k < v.size(); k++) {
                if (i != j && j != k && i != k) {
                    if (p >= v[i] + v[j] + v[k] && max < v[i] + v[j] + v[k]) {
                        max = v[i] + v[j] + v[k];
                    }
                }
            }
        }
    }

    cout << max;

    return 0;
}