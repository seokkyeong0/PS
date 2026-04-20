#include <iostream>
using namespace std;

int a[26][200001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    
    a[s[0] - 'a'][0] += 1;

    for (int i = 1; i < s.size(); i++) {
        a[0][i] = a[0][i - 1];
        a[1][i] = a[1][i - 1];
        a[2][i] = a[2][i - 1];
        a[3][i] = a[3][i - 1];
        a[4][i] = a[4][i - 1];
        a[5][i] = a[5][i - 1];
        a[6][i] = a[6][i - 1];
        a[7][i] = a[7][i - 1];
        a[8][i] = a[8][i - 1];
        a[9][i] = a[9][i - 1];
        a[10][i] = a[10][i - 1];
        a[11][i] = a[11][i - 1];
        a[12][i] = a[12][i - 1];
        a[13][i] = a[13][i - 1];
        a[14][i] = a[14][i - 1];
        a[15][i] = a[15][i - 1];
        a[16][i] = a[16][i - 1];
        a[17][i] = a[17][i - 1];
        a[18][i] = a[18][i - 1];
        a[19][i] = a[19][i - 1];
        a[20][i] = a[20][i - 1];
        a[21][i] = a[21][i - 1];
        a[22][i] = a[22][i - 1];
        a[23][i] = a[23][i - 1];
        a[24][i] = a[24][i - 1];
        a[25][i] = a[25][i - 1];
        a[s[i] - 'a'][i] += 1;
    }

    char c;
    int r, mn, mx;

    cin >> r;
    while (r--) {
        cin >> c >> mn >> mx;
        cout << a[c - 'a'][mx] - a[c - 'a'][mn - 1] << '\n';
    }

    return 0;
}