class Solution {
public:
    bool isBalanced(string num) {
        int e_sum = 0;
        int o_sum = 0;
        for (int i=0; i<num.size(); i++) {
            if ((i+1) % 2 == 0) 
                e_sum += num[i] - '0';
            else 
                o_sum += num[i] - '0';
        }
        return e_sum == o_sum;
    }
};