#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> x;
    vector<int> y;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        x.push_back(a);
        y.push_back(b);
    }

    int x_min = x[0];
    int x_max = x[0];
    int y_min = y[0];
    int y_max = y[0];

    for (int i = 0; i < n; i++) {
        if (x_min > x[i])
            x_min = x[i];
        if (x_max < x[i])
            x_max = x[i];
        if (y_min > y[i])
            y_min = y[i];
        if (y_max < y[i])
            y_max = y[i];
    }

    cout << (x_max - x_min) * (y_max - y_min);

    return 0;
}