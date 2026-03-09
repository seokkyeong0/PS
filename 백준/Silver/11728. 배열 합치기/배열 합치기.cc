#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> a, vector<int> b);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, x;
    cin >> a >> b;

    vector<int> v1;
    vector<int> v2;

    while (a--) {
        cin >> x;
        v1.push_back(x);
    }

    while (b--) {
        cin >> x;
        v2.push_back(x);
    }

    merge(v1, v2);

    return 0;
}

void merge(vector<int> a, vector<int> b) {
    int i_a = 0;
    int i_b = 0;
    int s_a = a.size();
    int s_b = b.size();
    while (i_a + i_b < s_a + s_b) {
        if (s_a > i_a && s_b > i_b) {
            if (a[i_a] < b[i_b])
                cout << a[i_a++] << ' ';
            else
                cout << b[i_b++] << ' ';
        }
        else {
            if (s_a > i_a)
                cout << a[i_a++] << ' ';
            else if (s_b > i_b)
                cout << b[i_b++] << ' ';
        }
    }
}