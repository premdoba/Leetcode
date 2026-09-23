class Solution {
public:
    int compress(vector<char>& chars) {
        string s;
        int count = 1;
        for (int i=1; i<chars.size(); i++) {
            if (chars[i-1] != chars[i]) {
                if (count > 1) {
                    s += chars[i-1];
                    s += to_string(count);
                } else {
                    s += chars[i-1];
                }
                count = 1;
            } else {
                count++;
            }
        }
        if (count > 1) {
            s += chars[chars.size()-1];
            s += to_string(count);
        } else {
            s += chars[chars.size()-1];
        }
        for (int i=0; i<s.size(); i++) {
            chars[i] = s[i];
        }
        return s.size();
    }
};