class Solution {
public:
    bool canJump(vector<int>& nums) {
        int m = nums[0];
        for (int i=1; i<nums.size(); i++) {
            if (m == 0)
                return false;
            m = max(m - 1, nums[i]);
        }
        return true;
    }
};