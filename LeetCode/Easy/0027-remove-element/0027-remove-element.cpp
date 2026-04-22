class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cur_idx = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[cur_idx++] = nums[i];
            }
        }
        return cur_idx;
    }
};