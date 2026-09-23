class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        string last;
        for (int i=1; i<strs.size(); i++) {
            last = prefix;
            prefix.clear();
            for (int j=0; j<strs[i].size(); j++) {
                if (last[j] == strs[i][j]) {
                    prefix += last[j];
                }
                else {
                    break;
                }
            }
        }
        return prefix;
    }
};