class Solution {
public:
    bool isValid(string s) {
        deque<char> dq;
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                dq.push_back(s[i]);
            }
            else if (s[i] == '{') {
                dq.push_back(s[i]);
            }
            else if (s[i] == '[') {
                dq.push_back(s[i]);
            }
            else if (s[i] == ')') {
                if (dq.size() == 0) return false;
                if (dq.back() == '(') dq.pop_back();
                else return false;
            }
            else if (s[i] == '}') {
                if (dq.size() == 0) return false;
                if (dq.back() == '{') dq.pop_back();
                else return false;
            }
            else if (s[i] == ']') {
                if (dq.size() == 0) return false;
                if (dq.back() == '[') dq.pop_back();
                else return false;
            }
        }

        if (dq.size() == 0) return true;
        else return false;
    }
};