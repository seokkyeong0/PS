#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string a, b;
    cin >> a >> b;
    if (a.size() >= b.size()) {
        cout << "go";
    } 
    else {
        cout << "no";    
    }

    return 0;
}