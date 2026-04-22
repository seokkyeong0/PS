class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> dummy;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                dummy.push_back(nums[i]);
            }
        }

        for (int i = 0; i < dummy.size(); i++) {
            nums[i] = dummy[i];
        }

        return dummy.size();
    }
};