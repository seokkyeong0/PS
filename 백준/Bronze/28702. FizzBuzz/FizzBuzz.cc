#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<string> v;
    for (int i = 0; i < 3; i++) {
        string s;
        cin >> s;
        v.push_back(s);
    }
    
    int m;
    for (int i = 0; i < 3; i++) {
        if (v[i][0] - 48 < 10)
            m = stoi(v[i]) - i + 3;
    }
    
    if (m % 3 == 0 && m % 5 == 0) {
        cout << "FizzBuzz";
    } 
    else if (m % 3 == 0 && m % 5 != 0) {
        cout << "Fizz";
    }
    else if (m % 3 != 0 && m % 5 == 0) {
        cout << "Buzz";
    }
    else {
        cout << m;
    }
    
    return 0;
}