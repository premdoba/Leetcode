class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if (nums.size() < 4)
            return {};
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for (int i=0; i<nums.size()-3; i++) {
            int j = i+1;
            // while (nums[i] == nums[j])
            //     j++;
            for (; j<nums.size()-2; j++) {
                int k = j+1;
                // while(nums[k] == nums[j])
                //     k++;
                int l = nums.size()-1;
                while (k < l) {

                    long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[l];
                    if (sum < target) {
                        k++;
                    } else if (sum > target) {
                        l--;
                    } else {
                        ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                        k++;
                        l--;

                        while (k < l && nums[k] == nums[k-1])
                            k++;
                    }
                }
                int store = nums[j];
                while (j < nums.size()-2 && nums[j] == store)
                    j++;
                j--;
            }
            int s = nums[i];
            while (i < nums.size()-3 && nums[i] == s)
                i++;
            i--;
        }
        return ans;
    }
};