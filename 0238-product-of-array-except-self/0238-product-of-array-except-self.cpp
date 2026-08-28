class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        int prdt = 1;
        for (int i=0; i<nums.size(); i++) {
            ans[i] = prdt;
            prdt *= nums[i];
        }
        prdt = 1;
        for (int i=nums.size()-1; i>=0; i--) {
            ans[i] *= prdt;
            prdt *= nums[i]; 
        }
        return ans;
    }
};