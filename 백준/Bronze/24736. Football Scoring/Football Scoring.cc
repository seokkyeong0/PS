#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int score[6] = {0};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> score[j];
        }
        int result = 0;
        result += score[0] * 6;
        result += score[1] * 3;
        result += score[2] * 2;
        result += score[3] * 1;
        result += score[4] * 2;
        cout << result << '\n';
    }
    
    return 0;
}