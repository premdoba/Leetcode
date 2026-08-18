class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0;
        int end = height.size()-1;
        int max_area = 0;
        while (start < end) {
            max_area = max(max_area,(end-start)*min(height[start],height[end]));
            if (height[start] < height[end])
                start++;
            else 
                end--;
        }
        return max_area;
    }
};