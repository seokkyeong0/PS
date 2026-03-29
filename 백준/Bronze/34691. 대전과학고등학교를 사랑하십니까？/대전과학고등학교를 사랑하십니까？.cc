#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        string s;
        cin >> s;

        if (s == "end") 
            break;

        if (s == "animal") {
            cout << "Panthera tigris\n";
        }
        else if (s == "tree") {
            cout << "Pinus densiflora\n";
        }
        else if (s == "flower") {
            cout << "Forsythia koreana\n";
        }
    }

    return 0;
}