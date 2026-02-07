class Solution {
public:
    bool canJump(vector<int>& nums) {
        int idx = 0;
        vector<bool> done(nums.size(), false);
        return jump(nums, idx, nums[0], done);
    }
    bool jump(vector<int>& nums, int idx, int n, vector<bool>& done) {
        if (idx == nums.size() - 1)
            return true;
        if (idx >= nums.size())
            return false;
        int i = 1;
        while (i <= n && i+idx < nums.size()) {
            if (done[idx + i] == false) {
                done[idx + i] = true;
                bool a = jump(nums, idx + i, nums[idx + i], done);
                if (a == false)
                    i++;
                else
                    return a;
            } else
                i++;
        }
        return false;
    }
};