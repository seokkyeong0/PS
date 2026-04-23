class Solution {
public:
    int lengthOfLastWord(string s) {
        int lw_len = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                if (i < s.size() - 1) {
                    if (s[i+1] != ' ') {
                        lw_len = 0;
                    }
                }
            }
            else lw_len++;
        }
        return lw_len;
    }
};