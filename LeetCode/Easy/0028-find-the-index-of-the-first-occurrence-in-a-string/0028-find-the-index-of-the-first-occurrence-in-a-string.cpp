class Solution {
public:
    int strStr(string haystack, string needle) {
        if (haystack == needle) return 0;

        int idx_m = haystack.size();
        int idx_n = (needle.size() > 1) ? needle.size() : 0;

        for (int i = 0; i <= idx_m - idx_n; i++) {
            if (haystack.substr(i, needle.size()) == needle)
                return i;
        }
        return -1;
    }
};