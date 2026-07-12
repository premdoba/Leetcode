class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {

        set<int> s(arr.begin(), arr.end());
        unordered_map<int, int> rank;
        int r = 1;

        for (int x : s)
            rank[x] = r++;

        for (int i=0; i<arr.size(); i++)
            arr[i] = rank[arr[i]];

        return arr;
    }
};