#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int cnt = 0;

    for (int i = 0; i < s.size();) {
        
        bool t = true;

        if (i < s.size() - 2) {
            if (s.substr(i, 3) == "dz=") {
                cnt++;
                i += 3;
                t = false;
            }
        }

        if (t && i < s.size() - 1) {
            if (s.substr(i, 2) == "c=") {
                cnt++;
                i += 2;
            }
            else if (s.substr(i, 2) == "c-") {
                cnt++;
                i += 2;
            }
            else if (s.substr(i, 2) == "d-") {
                cnt++;
                i += 2;
            }
            else if (s.substr(i, 2) == "lj") {
                cnt++;
                i += 2;
            }
            else if (s.substr(i, 2) == "nj") {
                cnt++;
                i += 2;
            }
            else if (s.substr(i, 2) == "s=") {
                cnt++;
                i += 2;
            }
            else if (s.substr(i, 2) == "z=") {
                cnt++;
                i += 2;
            }
            else {
                cnt++;
                i++;
            }
        }
        
        if (i == s.size() - 1) {
            cnt++;
            i++;
        }
    }

    cout << cnt;

    return 0;
}