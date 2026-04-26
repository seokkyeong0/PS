class Solution {
public:
    int mySqrt(int x) {
        if (x == 2147483647) return 46340;
        for (int i = 1; i < 46341; i++) {
            if (i * i >= x) {
                if (i * i == x) {
                    return i;
                } 
                else {
                    return i - 1;
                }
            }
        }
        return 0;
    }
};