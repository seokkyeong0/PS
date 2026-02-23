#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, p;
    cin >> n >> p;
    
    vector<int> v;
    vector<int> m;
    
    while (n--) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.size(); j++) {
            for (int k = 0; k < v.size(); k++) {
                if (i != j && j != k && i != k) {
                    if (p >= v[i] + v[j] + v[k]) {
                        m.push_back(v[i] + v[j] + v[k]);
                    }
                } 
            }
        }
    }

    cout << *max_element(m.begin(), m.end());

    return 0;
}