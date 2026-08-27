class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot = 0;
        for (int i=nums.size()-2; i>=0; i--) {
            if (nums[i] < nums[i+1]) {
                pivot = i;
                for (int j=nums.size()-1; j>=pivot; j--) {
                    if (nums[j] > nums[pivot]) {
                        swap(nums[pivot],nums[j]);
                        break;
                    }
                }
                reverse(nums.begin()+pivot+1,nums.end());
                return;
            }
        }
        reverse(nums.begin(),nums.end());
    }
};