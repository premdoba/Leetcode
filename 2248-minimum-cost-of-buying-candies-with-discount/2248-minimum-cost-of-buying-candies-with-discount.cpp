class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int amt = 0;
        for (int i=cost.size()-1; i>=0; i-=3) {
            amt += cost[i];
            if (i-1 >= 0) {
                amt += cost[i-1];
            }
        }
        return amt;
    }
};