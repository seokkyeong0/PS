class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool all_nine_check = true;
        for (int i = 0; i < digits.size(); i++) {
            if (digits[i] != 9) {
                all_nine_check = false;
            }
        }

        if (all_nine_check) {
            digits[0] = 1;
            for (int i = 1; i < digits.size(); i++) {
                digits[i] = 0;
            }
            digits.push_back(0);
        }
        else {
            digits[digits.size() - 1]++;
            for (int i = 0; i < digits.size() - 1; i++) {
                if (digits[digits.size() - 1 - i] == 10) {
                    digits[digits.size() - 1 - i] = 0;
                    digits[digits.size() - 2 - i]++;
                }
            }
        }

        return digits;
    }
};