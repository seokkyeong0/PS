class Solution {
public:
    int romanToInt(string s) {
        int val_res = 0;
        for (int i = 0; i < s.size(); i++) {
            int val_cur = 0;
            int val_nxt = 0;
            if (s[i] == 'I') val_cur += 1;
            else if (s[i] == 'V') val_cur += 5;
            else if (s[i] == 'X') val_cur += 10;
            else if (s[i] == 'L') val_cur += 50;
            else if (s[i] == 'C') val_cur += 100;
            else if (s[i] == 'D') val_cur += 500;
            else if (s[i] == 'M') val_cur += 1000;

            if (i < s.size() - 1) {
                if (s[i+1] == 'I') val_nxt += 1;
                else if (s[i+1] == 'V') val_nxt += 5;
                else if (s[i+1] == 'X') val_nxt += 10;
                else if (s[i+1] == 'L') val_nxt += 50;
                else if (s[i+1] == 'C') val_nxt += 100;
                else if (s[i+1] == 'D') val_nxt += 500;
                else if (s[i+1] == 'M') val_nxt += 1000;
            }

            if (val_cur < val_nxt) {
                val_res += val_nxt - val_cur;
                i++;
            }
            else {
                val_res += val_cur;
            }
        }

        return val_res;
    }
};