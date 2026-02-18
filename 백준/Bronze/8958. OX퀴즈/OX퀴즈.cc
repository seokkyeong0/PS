#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int score = 0;
        int streak = 0;

        for (auto c : s) {
            if (c == 'O') {
                score += (1 + streak++);
            }
            else if (c == 'X') {
                streak = 0;
            }
        }

        cout << score << '\n';
    }
    
    return 0;
}