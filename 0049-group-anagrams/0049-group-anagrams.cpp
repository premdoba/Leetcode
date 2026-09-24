class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        vector<string> sorted;

        for (int i=0; i<strs.size(); i++) {
            bool found = false;
            string b = strs[i];
            sort(b.begin(),b.end());
            for (int j=0; j<ans.size(); j++) {
                if (sorted[j] == b) {
                    found = true;
                    ans[j].push_back(strs[i]);
                }
            }
            if (found == false) {
                string a = strs[i];
                sort(a.begin(),a.end());
                sorted.push_back(a);
                ans.push_back({strs[i]});
            }
        }

        return ans;
    }
};