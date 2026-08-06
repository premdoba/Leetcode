class Solution {
public:
    int smallestNumber(int n, int t) {
        int prdt = 1;
        int a = n;
        while (a > 0) {
            prdt *= a % 10;
            a /= 10;
        }
        if (prdt % t == 0) {
            return n;
        }
        else {
            n = smallestNumber(n+1, t);
        }
        return n;
    }
};