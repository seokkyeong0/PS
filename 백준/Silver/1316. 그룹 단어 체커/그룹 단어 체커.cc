#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    int cnt = 0;
    
    while(t--){
        string s;
        cin >> s;

        bool is_group = true;

        int a[26] = {0};
        int streak = 1;
        
        if (s.size() > 2) {
            for (int i = 0; i < s.size(); i++){
                if (a[s[i] - 97] > 0) {
                    is_group = false;
                    break;
                }
                
                if (i < s.size() - 1) {
                    if (s[i] == s[i + 1])
                        streak++;
                    else {
                        a[s[i] - 97] = streak;
                        streak = 1;
                    } 
                }
            }
        }
        
        if (is_group)
            cnt++;
    }
    
    cout << cnt;
    
    return 0;
}