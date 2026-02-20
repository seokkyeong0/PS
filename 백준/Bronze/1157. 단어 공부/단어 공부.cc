#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a[26] = {0};
    
    int max_val = 0;
    int max_idx = 0;
    int max_cnt = 0;
    
    bool is_dup = false;
    
    string s;
    cin >> s;
    
    for(auto c : s){
        if (c >= 97)
            a[c - 97]++;
        else
            a[c - 65]++;
    }
    
    for(int i = 0; i < 26; i++){
        if (max_val < a[i]){
            max_val = a[i];
            max_idx = i;
        }
    }
    
    for(auto i : a){
        if (max_val == i)
            max_cnt++;
    }
    
    if(max_cnt > 1)
        is_dup = true;
        
    if(is_dup)
        cout << '?';
    else
        cout << (char)(max_idx + 65);
    
    return 0;
}