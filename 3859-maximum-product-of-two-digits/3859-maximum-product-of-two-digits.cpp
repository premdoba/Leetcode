class Solution {
public:
    int maxProduct(int n) {
        vector<int> elements;
        int prdt = 1;
        while (n > 0) {
            elements.push_back(n%10);
            n /= 10;
        }
        sort(elements.begin(),elements.end(), greater<int>());
        if (elements.size() >= 2) {
            return elements[0]*elements[1];
        }
        return elements[0];
    }
};