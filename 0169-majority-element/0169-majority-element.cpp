class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count = 0;
        int curr = nums[0];
        for (int i=0; i<nums.size(); i++) {
            if (curr == nums[i]) {
                count++;
            } else {
                if (count > nums.size() / 2) {
                    return curr;
                } else {
                    curr = nums[i];
                    count = 1;
                }
            }
        }
        if (count > nums.size() / 2) {
            return curr;
        } return -1;
    }
};