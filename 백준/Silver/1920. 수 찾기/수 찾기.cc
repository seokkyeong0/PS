#include <iostream>
#include <algorithm>
using namespace std;

int val[100000];
int arr[100000];

int binary_search(int st, int en, int target) {
    while (st <= en) {
        int mid = (st + en) / 2;
        if (arr[mid] < target)
            st = mid + 1;
        else if (arr[mid] > target)
            en = mid - 1;
        else
            return 1;
    }
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++) {
        cin >> val[i];
    }

    sort(arr, arr + n);
    
    for (int i = 0; i < m; i++) {
        cout << binary_search(0, n - 1, val[i]) << '\n';
    }

    return 0;
}