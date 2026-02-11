class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        vector<bool> done(nums2.size(),false);
        for (int i=0; i<nums1.size(); i++) {
            for (int j=0; j<nums2.size(); j++) {
                if (nums1[i] == nums2[j] && done[j] == false) {
                    ans.push_back(nums1[i]);
                    done[j] = true;
                    break;
                }
            }
        }
        return ans;
    }
};