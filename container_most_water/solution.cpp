class Solution {
public:
    int maxArea(vector<int>& height) {
        int largestArea = 0;
        int i = 0;
        int j = height.size() - 1;
        int curr = 0;
        int result = 0;
        
        while (i < j) {
            curr = (j - i) * min(height[i], height[j]);
            result = max(result, curr);
            
            if (height[i] <= height[j]) {
                i++;
            } else {
                j--;
            }
        }
        
        return result;
    }
};