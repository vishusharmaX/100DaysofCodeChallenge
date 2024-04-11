class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;

        int ans = 0;

        while(i < j){
            
            int h = min(height[i],height[j]);
            int w = j-i;

            int area = h * w;

            if(height[i] <= height[j]){
                i++;
            }
            else{
                j--;
            }

            ans = max(ans,area);

        }

        return ans;

    }
};