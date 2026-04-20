#include <iostream>
#include <string>
using namespace std;

int main() {

    string n;
    cin >> n;
    
    bool c = false;
    for(int i = 0; i < n.size(); i++){
        if(n[i] == '7') c = true;
    }
    
    bool v = (stoi(n) % 7 == 0);
    if (!c && !v) cout << 0;
    else if (!c && v) cout << 1;
    else if (c && !v) cout << 2;
    else if (c && v) cout << 3;
}