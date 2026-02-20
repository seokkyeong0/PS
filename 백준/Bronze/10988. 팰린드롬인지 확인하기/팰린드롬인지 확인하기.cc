#include <iostream>
using namespace std;

bool is_palindrome(string s);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;
    
    cout << (is_palindrome(s));

    return 0;
}

bool is_palindrome(string s){
    bool is_p = true;
  
  	int idx_max = s.size() - 1;
    
    for(int i = 0; i < s.size() / 2; i++){
        if(s[i] != s[idx_max - i]){
            is_p = false;
            break;
        }
    }
    
    return is_p;
}