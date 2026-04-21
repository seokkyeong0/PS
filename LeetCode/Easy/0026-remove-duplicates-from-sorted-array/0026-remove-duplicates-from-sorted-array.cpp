class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cur_idx = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[cur_idx] != nums[i]) {
                nums[++cur_idx] = nums[i];
            }
        }
        return cur_idx + 1;
    }
};