class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0, j = n-1;
        int ans = 0 , maxarea = 0;
        while( i <= j){
            int h = min(height[i] ,height[j]);
            int w = j - i ;
            int area = h * w;
            maxarea = max(area,maxarea);
            if(height[i] <= height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxarea;
    }
};