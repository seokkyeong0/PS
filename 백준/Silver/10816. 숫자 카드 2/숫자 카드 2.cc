#include <iostream>
#include <algorithm>
using namespace std;

int val[500000];
int arr[500000];

int bs_lower(int st, int en, int target) {
    while (st < en) {
        int mid = (st + en) / 2;
        if (arr[mid] >= target) en = mid;
        else st = mid + 1;
    }
    return st;
}

int bs_upper(int st, int en, int target) {
    while (st < en) {
        int mid = (st + en) / 2;
        if (arr[mid] > target) en = mid;
        else st = mid + 1;
    }
    return st;
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
        cout << bs_upper(0, n, val[i]) - bs_lower(0, n, val[i]) << ' ';
    }

    return 0;
}