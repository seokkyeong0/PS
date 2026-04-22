class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int idx_target = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < target) idx_target++;
            else return idx_target;
        }
        return idx_target;
    }
};