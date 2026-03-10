#include <iostream>
#include <cmath>
using namespace std;

int A[500001] = { 0 };
int res[500001] = { 0 };
int N, K, cnt = 0;

void merge(int p, int q, int r) {
    int left = p, right = q + 1, temp = 0;
    while (left <= q && right <= r) {
        if (A[left] <= A[right]) {
            res[temp++] = A[left++];
        }
        else {
            res[temp++] = A[right++];
        }
    }

    while (left <= q) {
        res[temp++] = A[left++];
    }
    while (right <= r) {
        res[temp++] = A[right++];
    }

    left = p;
    temp = 0;
    while (left <= r)
    {
        A[left++] = res[temp++];
        cnt++;
        if (cnt == K)
        {
            cout << A[left - 1];
            return;
        }
    }
}

void merge_sort(int p, int r) {
    if (p < r) {
        int q = floor((p + r) / 2);
        merge_sort(p, q);
        merge_sort(q + 1, r);
        merge(p, q, r);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> K;
    for (int i = 0; i < N; i++)
        cin >> A[i];

    merge_sort(0, N - 1);
    if (cnt < K)
        cout << "-1";
}