class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        string s = "123456789";
        string l = to_string(low);
        string h = to_string(high);
        int window = l.size();
        while (window <= h.size()) {
            string a = "";
            for (int i=0; i<s.size(); i++) {
                a += s[i];
                if (i >= window-1) {
                    int check = stoi(a);
                    cout << check << endl;
                    if (check <= high && check >= low)
                        ans.push_back(check);
                    a.erase(0,1);
                }
            }
            window++;
        }
        return ans;
    }
};