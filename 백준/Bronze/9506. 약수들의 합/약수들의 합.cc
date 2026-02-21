#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        int n, sum = 0;
        vector<int> v;

        cin >> n;
        if (n == -1) break;

        for (int i = 1; i < n + 1; i++) {
            if (n % i == 0) {
                v.push_back(n / i);
            }
        }

        for (int i = 1; i < v.size(); i++) {
            sum += v[i];
        }

        if (n == sum) {
            cout << n << " = ";
            for (int i = v.size() - 1; i > 1; i--) {
                cout << v[i] << " + ";
            }
            cout << v[1] << '\n';
        }
        else {
            cout << n << " is NOT perfect.\n";
        }

        sum = 0;
    }

    return 0;
}