class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;

        int maxArea = INT_MIN;
        while(left < right){
            int heights = min(height[left], height[right]);

            int width = right - left;
            
            int area = heights * width;
        
            maxArea = max(area, maxArea);

            if(height[left] < height[right]){
                left++;
            }else{
                right--;
            }
        }

        return maxArea;
    }
};