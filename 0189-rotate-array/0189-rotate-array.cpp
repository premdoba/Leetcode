class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp(nums);
        for (int i=0; i<nums.size(); i++) {
            if (i+k >= nums.size()) {
                int t = i+k;
                while (t >= nums.size())
                    t -= nums.size();
                nums[t] = temp[i];
            }
            else {
                nums[i+k] = temp[i]; 
            }
        }
    }
};