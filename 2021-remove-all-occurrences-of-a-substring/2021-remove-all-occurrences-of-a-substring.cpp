class Solution {
public:
    string removeOccurrences(string s, string part) {
        for (int i=0; i<s.size(); i++) {
            if (s[i] == part[0]) {
                int idx = i;
                for (int j=0; j<part.size(); j++) {
                    if (s[idx] != part[j])
                        break;
                    idx++;
                }
                if (idx == i + part.size()) {
                    s.erase(i, part.size());
                    i = -1;
                }
            }
        }
        return s;
    }
};