#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false); 
    
    string s;
    cin >> s;

    int total = 0;
    for (auto c : s) {
        if (c >= 'A' && c <= 'C')
            total += 3;
        else if (c >= 'D' && c <= 'F')
            total += 4;
        else if (c >= 'G' && c <= 'I')
            total += 5;
        else if (c >= 'J' && c <= 'L')
            total += 6;
        else if (c >= 'M' && c <= 'O')
            total += 7;
        else if (c >= 'P' && c <= 'S')
            total += 8;
        else if (c >= 'T' && c <= 'V')
            total += 9;
        else if (c >= 'W' && c <= 'Z')
            total += 10;
        else
            total += 0;
    }

    cout << total;
    
    return 0;
}