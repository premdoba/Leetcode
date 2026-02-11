class Solution {
public:
    int arrangeCoins(int n) {
        long long i = 0;
        long long count = 0;
        while (count <= n) {
            i++;
            count += i;
        }
        return i-1;
    }
};