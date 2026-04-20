class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int m_len = 200;
        for (int i = 0; i < strs.size(); i++) {
            if (m_len > strs[i].size()) {
                m_len = strs[i].size();
            }
        }

        string res = "";
        for (int j = 0; j < m_len; j++) {
            bool judge = true;
            char ch = strs[0][j];

            for (int k = 1; k < strs.size(); k++) {
                if (ch != strs[k][j]) {
                    judge = false;
                    return res;
                }
            }

            if (judge) 
                res += ch;
        }

        return res;
    }
};